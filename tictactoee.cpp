#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
int q,l;
char arrb[10][10]={"0","1","2","3","4","5","6","7","8"};
class tictak
{
    protected:
        char input[8];
        int a,p[20];
        int i;
        int j;
        int count;
        int x[10];
        char inputb[10];
    public:
        void getinput();
        void complogic();
        void displayui();
        void displayui2(int,int);
        void dispalyend();
        void win();
};
 
void tictak::getinput()
{
   
    cout<<"\nEnter position::";
    cin>>p[j];
    count=count+1;
    //for ( j = 1; j <=3; j++)
    //{
        dispalyend();
    //}
    //complogic();
}
void tictak::displayui()
{
    int arr[20]={0,1,2,3,4,5,6,7,8};
    cout<<"|==========|"<<endl;
    cout<<"    GAME::"<<l<<endl;
    cout<<"|==========|"<<endl;
    cout<<"\nWELCOME TO TIC TAC TOE\n";

    cout<<"\nTHE STRUCTURE OF THE BOARD\n";
    cout<<"---------\n";
    for ( j = 0; j < 9; j++)
    {
        
        cout<<""<<arr[j]<<" |";
       if(j==2 || j==5 || j==8){cout<<"\n";}
       
    }
    cout<<"---------\n";
    cout<<"\nLet's start!!!\n";
    cout<<"\nComputer plays with X!\n";
    cout<<"\nEnter the letter you want to play with::";
    cin>>input;
    
    getinput();
    
}
void tictak::displayui2(int pa,int pa2)
{ 
    char compinput[2]="X";
    //char arrb[10][10]={"0","1","2","3","4","5","6","7","8"};
    if(pa2==-1){
        for (j = 0; j < 8; j++){
            //for (i = 0; i < q; i++){
            if(j==pa){
                    strcpy(arrb[j],input);
                }
            //}
            //cout<<"\n---------\n";
        }
    
    }
    else{
    for (j = 0; j < 8; j++){
        if(j==pa2){
            
            strcpy(arrb[j],compinput);
        }   
     }
    }
    cout<<"\n---------\n";
    for ( j = 0; j < 9; j++)
    {
        
        cout<<""<<arrb[j]<<" |";
       if(j==2 || j==5 || j==8){cout<<"\n";}
       
    }
    cout<<"\n---------\n";

    
}

void tictak::dispalyend()
{
    
    if(p[j]==1){
        displayui2(1,-1);
    }
    else if(p[j]==2){
        displayui2(2,-1);
    }
    else if(p[j]==0){
        displayui2(0,-1);
    }
    else if(p[j]==3){
        displayui2(3,-1);
    }
    else if(p[j]==4){
        displayui2(4,-1);
    }
    else if(p[j]==5){
        displayui2(5,-1);
    }
    else if(p[j]=6){
        displayui2(6,-1);
    }
    else if(p[j]==7){
        displayui2(7,-1);
    }
    else if(p[j]==8){
        displayui2(8,-1);
    }
    else{
        cout<<"INVALID ENTRY!";
    }
    //win();
    complogic();
}
void tictak::complogic()
{
    
    srand(time(0));
    x[j]=(rand()%6);
    if(x[j]==p[j]&&x[j]!=x[j-1]&&x[j]!=x[j-2]){
       complogic();
    }
    else{
    cout<<"\nCOMPUTER CHOOSES::"<<x[j];
    if(x[j]==1){
        displayui2(-1,1);
    }
    else if(x[j]==2){
        displayui2(-1,2);
    }
    else if(x[j]==0){
        displayui2(-1,0);
    }
    else if(x[j]==3){
        displayui2(-1,3);
    }
    else if(x[j]==4){
        displayui2(-1,4);
    }
    else if(x[j]==5){
        displayui2(-1,5);
    }
    else if(x[j]=6){
        displayui2(-1,6);
    }
    else if(x[j]==7){
        displayui2(-1,7);
    }
    else {
        displayui2(-1,8);
    }
    }
    
    if(count==2){
        win();
    }
    else{
    	getinput();
    }
    

}
void tictak::win()
{

        if((p[1]==0||p[1]==4||p[1]==8)&&(p[2]==0||p[2]==4||p[2]==8)&&(p[3]==0||p[3]==4||p[3]==8))
        {
            cout<<"YOU WIN!!";
        }
        else if((p[1]==2||p[1]==4||p[1]==6)&&(p[2]==2||p[2]==4||p[2]==6)&&(p[3]==2||p[3]==4||p[3]==6))
        {
            cout<<"YOU WIN!!";
        }
        else if((p[1]==1||p[1]==4||p[1]==7)&&(p[2]==1||p[2]==4||p[2]==7)&&(p[3]==1||p[3]==4||p[3]==7))
        {
            cout<<"YOU WIN!!";
        }
       else if((p[1]==3||p[1]==4||p[1]==5)&&(p[2]==3||p[2]==4||p[2]==5)&&(p[3]==3||p[3]==4||p[3]==5))
        {
            cout<<"YOU WIN!!";
        }
        else if((x[1]==0||x[1]==4||x[1]==8)&&(x[2]==0||x[2]==4||x[2]==8)&&(x[3]==0||x[3]==4||x[3]==8))
        {
            cout<<"YOU LOOSE!!";
        }
        else if((x[1]==2||x[1]==4||x[1]==6)&&(x[2]==2||x[2]==4||x[2]==6)&&(x[3]==2||x[3]==4||x[3]==6))
        {
            cout<<"YOU LOOSE!!";
        }
        else if((x[1]==1||x[1]==4||x[1]==7)&&(x[2]==1||x[2]==4||x[2]==7)&&(x[3]==1||x[3]==4||x[3]==7))
        {
            cout<<"YOU LOOSE!!";
        }
       else if((x[1]==3||x[1]==4||x[1]==5)&&(x[2]==3||x[2]==4||x[2]==5)&&(x[3]==3||x[3]==4||x[3]==5))
        {
            cout<<"YOU LOOSE!!";
        }
        else{
            cout<<"AN ERROR OCCURED!!";
        }
  
}
int main()
{
    tictak t;
    
    cout<<"Enter the number of times you want to play::";
    cin>>q;
    for(l=1;l<=q;l++){
    t.displayui();
    
    }
    return 0;
}
