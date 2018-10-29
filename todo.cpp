/* todo-task app
** Semester-end mini project
** Submitted by: Rahul Gurung (1726262) & Rahul Sharma (1726266)
**   Submitted to: Mr. Tejpal Sir
*/

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    // it saves
	  int ch;
	  
	  // this is array of tasks
    string task[20];
    int flag = 0;
	  while(true)

    {
        cout<<"------------------------------------------------------------------"<<endl;
		    cout<<"Choose your option:"<<endl<<"1) Enter new task."<<endl<<"2) Delete old task."<<endl<<"3) Exit."<<endl;
        cout<<"------------------------------------------------------------------"<<endl;

        cin>>ch;

        // special character which clears the screen
        cout << "\033[2J\033[1;1H";

        if( ch == 1 )
        {
            cout<<"Enter task:"<<endl;
            cin.ignore();
            getline(cin,task[flag]);
            flag++;
         }

         else if( ch == 2)
         {
//todo
         }

         else if( ch == 3)
         {
           cout<<"Thanks for using Todo-List"<<endl;
           exit(0);
         }
    // special characters which clears the screen
    cout << "\033[2J\033[1;1H";

    for( int i = 0; i< flag; i++)
    {
      cout<<i+1<<")";
      cout<<task[i]<<endl;
    }
	}
}
