#include <iostream>
#include <list>

template <typename T,typename R>
void print_positions(const T& l,const R& p)
{
    auto it = p.begin();
    auto h = l.begin();

    while(it != p.end() && h != l.end())
    {
        auto it1 = std::next(l.begin(),*it);
        std::cout << "[" << *it << "]" << ":" << *it1 << "\n";
        ++it;
        ++h;
    }

}



int main(){

   std::list<int> p1 = {7, 5, 16, 8,11,34,78};
   std::list<unsigned int> l1 = {1,3,5,2,0};

//    auto it = l1.begin();

//    while(it != l1.end())
//    {
  
//     auto it1 = std::next(p1.begin(),*it );
//     std::cout << "[" << *it <<"]" << ":" << *it1 << "\n";
//     ++it;
//    }

  

   print_positions(p1,l1);

    std::list<std::string> l = {"She","is","the","queen","of","the","blue","sky"};
    std::list<unsigned int> p = {2,7,1,6};
    
    print_positions(l,p);



   


    return 0;
}