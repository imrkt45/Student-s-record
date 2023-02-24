#include <bits/stdc++.h>
using namespace std;

int main()
{
      string name[30], course[30];
      int roll[30], mob[15];
      int totaldata = 0;
      int choice;
      while (1)
      {
            cout << endl
                 << endl;
            cout << "1 Enter the students' data" << endl;
            cout << "2 Search the students' data" << endl;
            cout << "3 Update the students' data" << endl;
            cout << "4 delete the students' data" << endl;
            cout << "5 Show the students' data" << endl;
            cout << "6 to get exit" << endl;

            cout << "Enter your choice:- ";
            cin >> choice;

            switch (choice)
            {

            case 1:
                  cout << endl
                       << endl;
                  int n;
                  cout << "How many students do you want to enter:- ";
                  cin >> n;
                  if (totaldata == 0)
                  {
                        totaldata += n;
                        for (int i = 1; i <= n; i++)
                        {
                              cout << "\nEnter the " << i << "th student's data: " << endl;
                              cout << "Enter student's name: ";
                              cin >> name[i];
                              cout << "Enter student's roll number: ";
                              cin >> roll[i];
                              cout << "Enter student's course: ";
                              cin >> course[i];
                              cout << "Enter student's contact: ";
                              cin >> mob[i];
                        }
                  }
                  else
                  {
                        for (int i = totaldata; i <= (totaldata + n); i++)
                        {
                              cout << "\nEnter the " << i << "th student's data: " << endl
                                   << endl;
                              ;
                              cout << "Enter student's name: ";
                              cin >> name[i];
                              cout << "Enter student's roll number: ";
                              cin >> roll[i];
                              cout << "Enter student's course: ";
                              cin >> course[i];
                              cout << "Enter student's contact: ";
                              cin >> mob[i];
                        }
                        totaldata += n;
                  }
                  break;

            case 2:
                  cout << endl
                       << endl;
                       cout<<"search the student with the help of roll no"<<endl;
                   //    int flag = 0;
                  int rollno;
                  cout << "Enter the student's roll no , you want to search:- ";
                  cin >> rollno;
                

                  for (int i = 1; i <= totaldata; i++)
                  {  
                        if (rollno == roll[i])
                        {
                              cout << endl;
                          //    flag = 1;
                              cout << i << "th Student's data: " << endl
                                   << endl;
                              cout << "Student's Name: " << name[i] << endl;
                              cout << "Student's Roll no: " << roll[i] << endl;
                              cout << "Student's Course: " << course[i] << endl;
                              cout << "Student's contact: " << mob[i] << endl;
                              break;
                        }
                      //  if (flag == 0 && i == totaldata)
                         //     cout << "Sorry no record found..!" << endl;
                  }

                  break;

            case 3:
                  cout << endl
                       << endl; 
                        // int result = 0;
                  cout << "Update the student's data with the help of roll no" << endl;
                  int x;
                  cout << "Enter the roll no:- ";
                  cin >> x;
                
                  for (int i = 1; i <= totaldata; i++)
                  {
                       
                        if (x == roll[i])
                        {
                              cout << endl;
                            //  result = 1;
                              cout << "\n Enter the new data: " << endl
                                   << endl;
                              cout << "Enter the student New name: ";
                              cin >> name[i];
                              cout << "Enter the student New course: ";
                              cin >> course[i];
                              cout << "Enter the student New contact: ";
                              cin >> mob[i];
                              cout << "Enter the new roll no: ";
                              cin >> roll[i];
                        }
                     //   if (result == 0 && i == totaldata)
                           //   cout << "Sorry no record found..!" << endl;
                  }

                  break;

            case 4:
                  cout << endl
                       << endl;
                      //  int z = 0;
                  cout << "delete the specific student's record with the help of roll no" << endl;
                  int num;
                  cout << "Enter the roll no of that student , you want to delete: ";
                  cin >> num;
                 
                  for (int i = 1; i <= totaldata; i++)
                  {
                        if (roll[i] == num)
                        {
                              cout << endl;
                            //  z = 1;
                              for (int j = i; j <= totaldata; j++)
                              {
                                    roll[j] = roll[j + 1];
                                    name[j] = name[j + 1];
                                    mob[j] = mob[j + 1];
                                    course[j] = course[j + 1];
                              }
                              totaldata--;
                              cout << "Specific record is deleted" << endl;
                        }
                      //  if (z == 0 && i == totaldata)
                          //    cout << "Sorry no record found..!" << endl;
                  }

                  break;

            case 5:
                  cout << endl
                       << endl;
                  for (int i = 1; i <= totaldata; i++)
                  {
                        cout << i << "th Student's data: " << endl
                             << endl;
                        cout << "Student's Name: " << name[i] << endl;
                        cout << "Student's Roll no: " << roll[i] << endl;
                        cout << "Student's Course: " << course[i] << endl;
                        cout << "Student's contact: " << mob[i] << endl;
                  }

                  break;

            case 6:
                  exit(0);
                  break;
            default:
                  cout << "Invalid Input" << endl;
                  break;
            }
      }
}
