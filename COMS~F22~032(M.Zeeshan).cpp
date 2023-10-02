#include <iostream>
using namespace std;
int arr[50];
int n;
// funtions declaration
void get_arr()
{
	cout<<"how many elements you want to enter\n: ";
	cin>>n;
	cout<<"Enter the "<<n<<" elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
// treversel
void display_arr()
{
	cout<<"your array is :";
	for (int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
void insert_begi()
	{
		for(int i = n; i >= 0; i--)
	{
		arr[i+1]=arr[i];
	}
	cout<<" enetr to insert the element at begining of array or position\n: '1'"<<endl;
			cin>>arr[0];
			n++;
	}


void insert_end()
{
	cout<<" enetr to insert the element at end  of array or last position\n: "<<endl;
		    cin>>arr[n];
			for(int i=0;i<n+1;i++)
			{
				cout<<arr[i]<<" ";
			}
			n++;
}
void insert_position()
{
	int position;
			cout<<"enetr the position where you want to insert the element: "<<endl;
			cin>>position;
			for(int i=n;i>=position;i--)
			{
				arr[i+1]=arr[i];
			}
			cout<<"enter the element at given position: "<<endl;
			cin>>arr[position];
			for(int i=0;i<n+1;i++)
			{
				cout<<arr[i]<<" ";
			}
			n++;
}
void delete_beg()	
{
	for(int i=0; i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	n--;
}
void delete_end()
{
    for(int i=0; i<n-1;i++)
    {
    	cout<<arr[i]<<" ";
	}
	n--;

}
void delete_position()
{
	int pos;
	cout<<"Enter the position where you want to delete an element: ";
	cin>>pos;
	if(pos>=n)
	{
		cout<<"invalid choice"<<endl;
	}
	else
	{
		for(int i=pos;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		for(int i=0; i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		}
		n--;
	}
}
void Inser_sort()
{
	for(int i=1; i<n; i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

}
void selec_sort()
{
	for(int i=1; i<n; i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

}
void bubbl_sort()
{
	int counter=1;
	while(counter<n)
	{
		for(int i=0; i<n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void searc_ln()
{
	int key;
	cout<<" enetr the element you want to search: ";
	cin>>key;
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i]==key)
		{
		cout<<"the value "<<arr[i]<<"  found on postion "<<i+1<<endl;
		return;
		}
	}
	if(arr[i]!=key){
		cout<<"Element not found";
	}
		
}
void searc_ln_index()
{
	int index;
	cout<<" enter the index of the element you want to get/n: ";
	cin>>index;
	
	cout<<"the value found at index "<<index<<" is "<<arr[index]<<endl;
		return;
	
}

int main()
{
    get_arr();
	display_arr(); // Display initial array
// Initialize array
//	int element;
//	int position;
//	int deleteposition

    while (true)
    {
        cout << "*************" << endl;
        cout << "Choose the option:" << endl;
        cout << "1. Insertion of Elements" << endl;
        cout << "2. Deletion of Elements" << endl;
        cout << "3. Sorting of Array" << endl;
        cout << "4. Searching of Elements" << endl;
        cout << "5. Searching of Elements at specific index" << endl;
        cout << "6. Exit" << endl;

        char choice;
        cin >> choice;

        switch (choice)
        {
            case '1':
                // Insertion operations
                while (true)
                {
                    cout << "****Select Operations:****" << endl;
                    cout << "1. Insertion of Element at Beginnig" << endl;
                    cout << "2. Insertion of Element at End" << endl;
                    cout << "3. Insertion of Element at Specific Location" << endl;
                    cout << "4. Back to the menu" << endl;
                    
                    char choice2;
                    cin >> choice2;

                    switch (choice2)
                    {
                // Insertion at beginning 
                        case '1':
//                            int insertelement;
//                            cout<<"enter element to insert";
//                            cin >> insertelement;
                            insert_begi();
                            display_arr();
                            break;
                // Insertion at end
                        case '2':
//                            cout << "enter element to insert";
//                            cin >> insertelement;
                            insert_end();
                            display_arr();
                        
                            break;
                // Insertion at specific position
                        case '3':
                           	insert_position();
                        	display_arr();
                            
                            break;

                        case '4':
                        	cout << "Back to main menu";
                            break;

                        default:
                            cout << "Enter the valid choice" << endl;
                    }

                    if (choice2 == '4')
                    {
                        break;
                    }
                }
                break;

            case '2':
                // Deletion operations
                while (true)
                {
                    cout << "**Select Operations:**" << endl;
                    cout << "1. Deletion of Element at Beginnig" << endl;
                    cout << "2. Deletion of Element at End" << endl;
                    cout << "3. Deletion of Element at Specific Location" << endl;
                    cout << "4. Back to the main menu" << endl;
                    
                    char choice3;
                    cin >> choice3;

                    switch (choice3)
                    {
                // Deletion at beginning
                        case '1':
                            delete_beg();
                            display_arr();
                            break;
                // Deletion at end
                        case '2':
                        delete_end();
                        display_arr();
                            
                            break;
                // Deletion at specific position
                        case '3':
                        delete_position();
                        display_arr();
                            break;

                        case '4':
                        	cout << "Back to main menu";
                            break;

                        default:
                            cout << "Invalid choice" << endl;
                    }

                    if (choice3 == '4')
                    {
                        break;
                    }
                }
                break;

            case '3':
                // Sorting operations
                while (true)
                {
                    cout << "**Select Operations:**" << endl;
                    cout << "1. Insertion sort" << endl;
                    cout << "2. Selection sort" << endl;
                    cout << "3. Bubble sort" << endl;
                    cout << "4. Back to the main menu" << endl;

                    char choice4;
                    cin >> choice4;

                    switch (choice4)
                    {
                // Insertion sort
                        case '1':
                        Inser_sort();
                        display_arr();
                            break;
                // Selection sort
                        case '2':
                        selec_sort();
                        display_arr();
                            break;
                // Bubble sort
                        case '3':
                        bubbl_sort();
                        display_arr();
                            break;

                        case '4':
                            break;

                        default:
                            cout << "Enter the valid Options" << endl;
                    }

                    if (choice4 == '4')
                    {
                        break;
                    }
                }
                break;
//    searching opertions
            case '4':
                searc_ln();
                display_arr();
                
                break;
                
            case '5':
                searc_ln_index();
                display_arr();
                cout<< " enter 1 to exit to main menu: ";
                char exit;
                cin>>exit;
                break;

            case '6':
                cout << "Program is terminated" << endl;
                break;

            default:
                cout << "Choose the correct options:" << endl;
        }

        if (choice == '6')
        {
            break;
        }
    }

    return 0;
}
