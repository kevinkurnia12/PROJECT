#include <iostream>
using namespace std;

int main()
{
  char letter;
  int count = 0;
  
  cout<<"NUL SQH STX ETX EOT ENQ ACK BEL BS TAB LF VT FF CR SO SI "<<endl;
  cout<<"DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US"<<endl;
  for (letter = 32; letter < 127; letter++, count++)
    {
      if (count == 16)
        {
          cout << endl;
          count = 0;
        }
      cout << letter << " ";
    }
  cout << endl;

  return 0;
}

