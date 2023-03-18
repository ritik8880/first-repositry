#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
      string title;
      float rating;

      public:
        cwh(string s , float r){
          string  title; 
          rating = r;
        }
         virtual void display();

};

class cwhvideo :public cwh{
        int videolength;

        public:
        cwhvideo(string s , float r , int vl): cwh(s , r){
            videolength = vl;
        }
        void display(){
            cout<<"This is the video with title "<< title <<endl;
            cout<<"This video has rating of "<< rating <<"out of 5 star"<<endl;
            cout<<"Length of this video is "<< videolength << "minutes" << endl;
        }

};

class cwhtext :public cwh {
        int words;

        cwhtext(string s , float r, int wr ) : cwh(s,r) {
              words = wr;
        }

        void display(){
            cout<<"This is the video with title "<< title <<endl;
            cout<<"This video has rating of "<< rating <<"out of 5 star"<<endl;
            cout<<" Number of words in this tutorial "<< words <<endl;
        }
};
int main(){
         string title;
         float rating , vlen;
         int words;

         title = "cpp tutorial";
         rating = 4.32;
         vlen = 23;
         cwhvideo djvideo(title , rating, vlen );

    title = "cpp tutorial Text";
    words = 433;
    rating = 4.19;
    cwhtext djText(title , rating, words);

    cwh* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}