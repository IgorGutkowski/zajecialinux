#include <iostream>
#include <string>

enum Permission {READ = 1, WRITE = 2, EXECUTE = 4};
std::string getPermission(Permission);
auto main() -> int{
 int user[10] = {2,3,4,5,7,1,0};
 for(auto i=0;i<=6;i++)
 {
 std::cout<<"User"<<i<<" can: "<<getPermission(Permission(user[i]))<<std::endl;
 }
return 0;
}
std::string getPermission(Permission zgody){
    switch(zgody)
    {
        case READ: // 1
        return "Read.";
        break;
        case WRITE: // 2
        return "Write.";
        break;
        case READ | WRITE: // 3
        return "Read and write.";
        case EXECUTE: // 4
        return "Execute.";
        break;
        case  EXECUTE | READ: // 5
        return "Execute and read.";
        break;
        case EXECUTE | WRITE: // 6
        return "Execute and write.";
        break;
        case EXECUTE | WRITE | READ: // 7
        return "Execute, write and read.";
        break;
        default:                     // default <=> else
        return "Nothing.";
        break;
    }
}
