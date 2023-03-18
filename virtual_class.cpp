#include<iostream>
using namespace std;

 class student{
       protected:
         int roll_number;

         public:
           void set_roll_number(int a){

             roll_number = a;
           }
             void get_roll_number(void){

                cout<<"The roll no is "<<endl;
             }
           
 };

 class test{
        protected:
         float maths , physics;

         public:
               void set_marks(float m1, float m2){
            
               maths = m1;
               physics = m2;

               }

            void get_marks(void){

                cout<<" Marks obtained in maths "<< maths <<endl;
                cout<<"Marks obtained in physics  "<< physics <<endl;
            }   
 };

 class sport : virtual public student{
       
       protected:
          float score;

          public:
            void set_score(float s){
                score = s;
            }

          void get_score(void){

            cout<<" Score  in sport is "<< score <<endl;
          }  
 };

 class result : public test , public sport{
       private :
        float total;

        public:
            void display(void){

                total = maths + physics + score;

                get_roll_number();
                 get_marks();
                 get_score();

                 cout<<"Your total score is "<< total <<endl;

            }
 }; 


int main(){
     
     result ritik;

     ritik.set_roll_number(62);
     ritik.set_marks(80.5,95.5);
     ritik.set_score(99.0);
     ritik.display();

    return 0;
}