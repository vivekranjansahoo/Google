class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i = 0 ; i < address.length();i++){
            if(address[i]=='.'){
                result +="[.]";
            }
            else result += address[i];
        }

        return result;
    }
};

//2nd approach

class Solution {
public:
    string defangIPaddr(string address) {

        for(int i = 0 ; i < address.length();i++){
            if(address[i]=='.'){
                address.insert(address.begin() + (i), '[');
                i++;
                address.insert(address.begin() + (i + 1), ']');
            }
        }

        return address;
    }
};

//3rd approach
class Solution {
public:
    string defangIPaddr(string address) {
        return regex_replace(address, regex("[.]"), "[.]");
    }
};
