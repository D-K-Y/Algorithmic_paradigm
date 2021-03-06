#include <vector>
#include <string>
template <typename T>
class binarySearch{
    std::vector<T> Values;
    bool bSearch(std::vector<T>& v , const T& val, int l , int r ){
        if (l == r) {
            if(v[l] == val) return true;
            else return false;
        }
        else {
            int m = (l + r) / 2;
            if (v[m] == val) {
                return true;
            }else if (v[m] > val) {
                bSearch(v, val, l, m-1);
            }else {
                bSearch(v, val, m+1, r);
            }
        }
    }
    public:
    binarySearch()=default;
    binarySearch(std::vector<T>& v):Values(v){}
    bool search(std::vector<T>& v, const T& val){
        return bSearch(v,val,0,v.size());
    }
    bool search(const T&){
        return bSearch(Values,val,0,v.size());
    }
    
};

template <>
bool binarySearch<std::string>::bSearch(std::vector<std::string>& v , const std::string& val, int l , int r ){
        if (l == r) {
            if(v[l] == val) return true;
            else return false;
        }
        else {
            int m = (l + r) / 2;
            if (v[m] == val) return true;
            else if (v[m] > val) {
            bSearch(v, val, l, m-1);
            }
            else {
                bSearch(v, val, m+1, r);
            }
        }
    }