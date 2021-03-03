/* Author: Daniel Eggers
 * Name: Crackpot hello world
 * Description: hello world obfuscated with vectors, 
 *   bitshifting, int to char conversions, and more
 * Compiler: g++ 5.4.1 c++11
 * Date: 2/25/2021
 */

#include <iostream>
#include <vector>
#include <iterator>
#define string 1

int main()
{
    std::vector<int> v1 {0, 832 >> 2, 202, 216}; 
    char c = 'a';
    int w = v1[1] + v1[3] - v1[2];
    for(int i= (59 << 2) + 2; i > w; i -= 10){
        v1.push_back(w); 
        v1.push_back(i); 
    }

    while(c < 'd') {
        v1.push_back(v1[3]);
        c += string;
    }
    v1.pop_back();

    v1.back() = v1.back() - ( v1[192 >> 6] - (100 << string) ); 
    std::vector<char> v2 {};
    v2.reserve(v1.size());
    int dl = v1[rand() % v1.size()];
    int x = v1[4] - v1[6];
    int t = v1[2] % v1[v1.size() - string];
    for (auto &n : v1) {
        do {
            x = n / t;
            v2.push_back(n);
        } while(dl == x);
        v2.pop_back();
        if(n == v1[t+string] && dl > v1.front()) {
            v2.push_back(x);
            dl = v1.front();
        }
        else if (n == v1[10 >> string]) {
            v2.push_back(2 << 3);
            v2.back() = v2.back() * t;
        }
        v2.push_back(x);
    }
    char cstr[string];
    
    copy(v2.begin() + v1[4] / v1[7] + (t / x), v2.end(), 
        std::ostream_iterator<char>(std::cout, cstr));
        
    return 0;
}


