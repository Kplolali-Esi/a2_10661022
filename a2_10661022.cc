#include <iostream>
using namespace std;
int main(int argc,char **argv){
int score;
cout<< "Please Enter your Score"<<endl;
cin>> score;

if (score<=100 && score>=80){
cout<<" Outstanding!"<<endl;
cout<<" Your grade is A"<<endl;
cout<<" Your grade point is 4.0"<<endl;
}

else if (score<=79 && score>=75){
cout<<" Very Good"<<endl;
cout<<" Your grade is B+"<<endl;
cout<<" Your grade point is 3.5"<<endl;
}

else if (score<=74 && score>=70){
cout<<" Good"<<endl;
cout<<" Your grade is B"<<endl;
cout<<" Your grade point is 3.0"<<endl;
}

else if (score<=69 && score>=65){
cout<<" Fairly Good"<<endl;
cout<<" Your grade is C+"<<endl;
cout<<" Your grade point is 2.5"<<endl;
}

else if (score<=64 && score>=60){
cout<<" Average"<<endl;
cout<<" Your grade is C"<<endl;
cout<<" Your grade point is 2.0"<<endl;
}

else if (score<=59 && score>=55){
cout<<" Below Average"<<endl;
cout<<" Your grade is D+"<<endl;
cout<<" Your grade point is 1.5"<<endl;
}

else if (score<=54 && score>=50){
cout<<" Marginal Pass"<<endl;
cout<<" Your grade is D"<<endl;
cout<<" Your grade point is 1.0"<<endl;
}

else if (score<=49 && score>=45){
cout<< "Unsatisfactory"<<endl;
cout<<"Your grade is E"<<endl;
cout<< "Your grade point is 0.5"<<endl;
}

else if (score<=44 && score>=0){
cout<< "FAIL"<<endl;
cout<<"Your grade is F"<<endl;
cout<< "Your grade point is 0"<<endl;
}

else{
cout<<"You Entered a wrong score"<<endl;
}

return 0;
}
