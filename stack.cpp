// program for stack implementation
/*......................Definition – 
Stack is a linear data structure which operates in a LIFO(Last In First Out) or  FILO (First In Last Out) pattern.
It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile of plates, etc.
Stack is an abstract data type with a bounded (predefined) capacity.
It is a simple data structure that allows adding and removing elements in a particular order.
The order may be LIFO(Last In First Out) or FILO(First In Last Out).
stack data structure diagram

Standard Stack Operations – 
push() –  Place an item onto the stack. If there is no place for new item, stack is in overflow state.
pop() – Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.
isEmpty() –  Tells if the stack is empty or not
isfull() – Tells if the stack is full or not.
peek() – Access the item at the i position
count() – Get the number of items in the stack.
change() – Change the item at the i position
display() – Display all items in the stack
Some Applications of Stack Data Structure –
Balancing of symbols
Infix to Postfix /Prefix conversion
Redo-undo features at many places like editors, photoshop.
Forward and backward feature in web browsers
Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.
Other applications can be Backtracking, Knight tour problem, rat in a maze, N queen problem and sudoku solver
In Graph Algorithms like Topological Sorting and Strongly Connected Components.....................*/

#include<iostream>
#include<string>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
		
	public:
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;		//all the array elements are zero
			}
		}
		
		bool isempty()		//true:false
		{
			if(top==-1)
				return true;
			else
				return false;
		}
		bool isfull()
		{
			if(top==4)
				return true;
			else
				return false;
		}
		
		void push(int val)
		{
			if(isfull())
			{
				cout<<"stack overflow"<<endl;
			}
			else
			{
				top++; //top becomes 0
				arr[top]=val; //store the first value
			}
		}
		int pop()
		{
			if(isempty())
			{
				cout<<"stack underflow"<<endl;
				return 0;
			}
			else
			{
				int popvalue=arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		int count()
		{
			return (top+1);
		}
		int peek(int pos)
		{
			if(isempty())
				{
					cout<<"stack underflow"<<endl;
					return 0;
				}
			else
			{
				return arr[pos];
			}
		}
		void change(int pos, int val)
		{
			arr[pos]=val;
			cout<<"value changed at location"<<pos<<endl;
		}
		void display()
		{
			cout<<"all values in the stack are"<<endl;
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
			
};
int main() {
  stack s1;
  int option, postion, value;
 
  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;
 
    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isempty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isfull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> postion;
      cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek(postion) << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}
