#include<bits/stdc++.h>
using namespace std;
int a=0;
class maxHeap{
    vector<int> hp;
    

    void upheapify(int ci){
            while(ci>0){
                a++;
                int pi=(ci-1)/2;
                if(hp[pi]<hp[ci]){
                    swap(hp[pi],hp[ci]);
                    ci=pi;
                }else {
                    break;
                }
            }
        }
    void downheapify(int idx){
            while(idx < hp.size()){
                a++;
                int lc=idx*2+1;
                int rc=idx*2+2;

                if(lc>=hp.size()) break;

                int maxEl= idx;
                if(hp[lc]> hp[maxEl]){
                    maxEl= lc;
                }
                if(rc<hp.size() && hp[rc]> hp[maxEl]){
                    maxEl=rc;
                }
                
                if(maxEl!=idx){
                    swap(hp[idx],hp[maxEl]);
                    idx=maxEl;
                }else{
                    break;
                }

            }
        }
    public:

        void popFirst(){
            if(empty()) return;
            swap(hp[0], hp[hp.size()-1]);
            hp.pop_back();
            downheapify(0);
        }
        void popAtIndex(int idx){
            hp[idx]=INT_MAX;
            swap(hp[idx],hp[0]);
            popFirst();
        }

        bool empty(){
            return hp.size()==0;
        }
        int peak(){
            if(empty()) return INT_MIN;
            return hp[0];
        }
        void push(int val) {
            hp.push_back(val);
            upheapify(hp.size()-1);
        }
        void display(){
            cout<<"[";
            for(int i=0; i<hp.size(); i++){
                cout<<hp[i]<<" ";
            }
            cout<<"]"<<endl;
        }
        maxHeap(vector <int> v){
            hp=v;
            for(int i=hp.size()/2; i>=0;i--){
                downheapify(i);
                a++;
            }

        }


};

int main()
{
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    cout<<a<<endl;
    maxHeap hp(v);
    hp.display();
    cout<<a;
    // hp.push(25);
    // hp.display();
    
    // //push
    // hp.push(42);
    // hp.push(65);
    // hp.push(35);
    // hp.push(44);
    // hp.push(96);
    // hp.push(-6);
    // hp.push(39);
    // hp.push(100);

    // //display ; pop
    // hp.display();
    // hp.popFirst();
    // hp.display();
    // hp.popAtIndex(2);
    // hp.display();

 return 0;
}