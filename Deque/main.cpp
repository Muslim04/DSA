#include <iostream>
#include <deque>

class Item{
public:
    Item() : m_var(0)
    {
        std::cout << "Item default constructor called " << std::endl;
    }

    Item(int var) : m_var(var){
        //std::cout << "Item default constructor called for :" <<m_var <<  std::endl;
    }

    Item(const Item& source) : m_var{source.m_var}{
        //std::cout << "Item copy constructor called for :" << m_var << std::endl;

    }

    int get() const{
        return m_var;
    }

private:
    int m_var{0};
};

std::ostream& operator << (std::ostream& out , const Item& item)
{
    out << "item [ value : " << item.get() << "]";
    return out;
}

template<typename T>
void print_collection(const T& collection)
{
    auto it = collection.begin();

    std::cout << " Collection [";
    while(it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << "]";
}



int main(){

    std::deque<int> numbers {1,2,3,4,5,6};

    std::deque<Item> items {Item(22),Item(33),Item(44),Item(55)};


    // std::cout << "items : ";
    // print_collection(items);

    std::deque<int> numbers_other {7,8,9,10,11,12};

    numbers.swap(numbers_other);
    std ::cout << "Numbers : ";
    print_collection(numbers);

    std ::cout << "Numbers_other : ";
    print_collection(numbers_other);


    return 0;
}