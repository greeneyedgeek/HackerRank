#include<bits/stdc++.h>

using namespace std;

class Box{
private:
    //l,b,h are integers representing the dimensions of the box
    int l, b, h;

    // The class should have the following functions : 
public:
    // Constructors: 
    // Box();
    Box() {
      this->l = 0;
      this->b = 0;
      this->h = 0;
    }
    // Box(int,int,int);
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    // Box(Box);
    Box(Box &box) {
    this->l = box.getLength();
    this->b = box.getBreadth();
    this->h = box.getHeight();
    }

    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }

    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume(){ return (long long) l*b*h; }

    // Overload operator < as specified
    // bool operator<(Box& b)
    bool operator<(Box &box) {
      bool is_smaller =
          (this->l < box.getLength() ||
           ((this->b < box.getBreadth()) && (this->l == box.getLength())) ||
           ((this->h < box.getHeight()) && (this->b == box.getBreadth()) &&
            (this->l == box.getLength())));

      return is_smaller;
    }
    // Overload operator << as specified
    // ostream& operator<<(ostream& out, Box& B)
    friend ostream &operator<<(ostream &out, Box &box){
        return out << box.getLength() << ' ' << box.getBreadth() << ' ' << box.getHeight();
    }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
