#include<iostream>
using namespace std;
struct list
{
	int num;
	list *nptr;
};
list *fptr=NULL;
int main()
{
	int num,opt,num3,max,min;
	char s;
	while(1)
	{
		cout<<"Select fom the following\n1.Insert number in linked list\n2.Delete number in the linked list\n3.Display all elements\n4.Display maximum and minimum\n";
		cin>>opt;
		cout<<endl;
		switch(opt)
		{
		case 1:
			{
	         	list *ptr;
		        ptr=new list;
		        cout<<"Enter num: ";
			    cin>>ptr->num;
			    ptr->nptr=NULL;
			    cout<<endl;
				
		        if(fptr==NULL)
		        {
		        	ptr->nptr=NULL;
		        	fptr=ptr;
	        	}
	        	
	        	else
	        	{
	        		
	        		if(fptr->num>ptr->num)
	            	{
	        	    	ptr->nptr=fptr;
	        	    	fptr=ptr;
				    }
			    
				else
			    	{
				    	list *currentptr=fptr;
		            	while(currentptr->nptr!=NULL)
		            	{
		     	        	if(currentptr->nptr->num > ptr->num)
		     	        	{
		     		        	ptr->nptr=currentptr->nptr;
		     		        	currentptr->nptr=ptr;
		     		        	break;
				        	 }
			            	currentptr=currentptr->nptr;
	    	        	}
	    	        	
	    	        	if(currentptr->nptr==NULL)
	    	        	{
	    	        	    currentptr->nptr=ptr;
	    	        	    
	    	        	}
		            }
		        
		        }
		        break;
		    }
		    case 2:
		    	{
		    		cout<<"Enter number that you want to delete: ";
		    		cin>>num;
		    		cout<<endl;
		    		list *currentptr=fptr;
		    		
		    		
					while(currentptr!=NULL)
					{
						if(num!=currentptr->num)
					    {
					    	cout<<"Not found"<<endl;
					    	
						}
						else if(num==currentptr->num)
						{
						cout<<"Your number is deleted."<<endl;
						currentptr->nptr=currentptr->nptr->nptr;
						break;
					    }
					    
						else
						currentptr=currentptr->nptr;
					    }
					    break;
					}
			   
				
				
		    case 3:
		    	{
		    		list *currentptr=fptr;
		    		while(currentptr!=NULL)
		    		{
		    			
		    			cout<<"Number is "<<currentptr->num;
		    			cout<<endl;
					    currentptr=currentptr->nptr;
					}
					break;
				}
			case 4:
			    {
			    	list *currentptr=fptr;
			    	max=currentptr->num;
					max=currentptr->num;
					while(currentptr!=NULL)
					{
						if(currentptr->num>max)
						max=currentptr->num;
						if(currentptr->num<min)
						min=currentptr->num;
						currentptr=currentptr->nptr;
					}
					cout<<"Max : "<<max<<endl;
					cout<<"Min : "<<min<<endl;
					break;
					}	
	    }
		
	    	cout<<"Press A to continue and B to exit\n";
				cin>>s;
				system("CLS");
				if(s=='A')
				continue;
				else if(s=='B')
				break;
        }
	
	return 0;
}
