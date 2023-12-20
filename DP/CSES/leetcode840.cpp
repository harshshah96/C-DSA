#include<bits/stdc++.h>
using namespace std;

    string decodeAtIndex(string s, int k) {
        long long totalLength = 0; // Initialize the total length of the decoded string.
        int i = 0;

        // Calculate the total length of the decoded string.
        while (i < s.size()) {
            if (isdigit(s[i])) { // If the current character is a digit (replication factor).
                int repeat = s[i] - '0'; // Extract the replication factor as an integer.
                totalLength *= repeat; // Update the total length by multiplying with the replication factor.
            } else {
                totalLength++; // If it's a letter, simply increment the total length.
            }

            if (totalLength >= k) { // If the total length is greater than or equal to k, stop.
                break;
            }

            i++; // Move to the next character in the input string.
        }

        // Backtrack to find the k-th letter.
        for (int j = i; j >= 0; j--) { // Start from where we stopped in the previous loop.
            if (isdigit(s[j])) { // If the current character is a digit (replication factor).
                int repeat = s[j] - '0'; // Extract the replication factor as an integer.
                totalLength /= repeat; // Reduce the total length by dividing by the replication factor.
                k %= totalLength; // Reduce k to the position within the current repeated portion.
            }else{    
                // If k becomes 0, it means we've found the answer within this repeated portion.
                if (k == 0 || k == totalLength) {
                    return string(1, s[j]); // Return the current character.
                }
                totalLength--;
            }
        }

        return "";
    }

int main()
{
    string s ="cpmxv8ewnfk3xxcilcmm68d2ygc88daomywc3imncfjgtwj8nrxjtwhiem5nzqnicxzo248g52y72v3yujqpvqcssrofd99lkovg";
    cout<<decodeAtIndex(s,480551547);



 return 0;
}