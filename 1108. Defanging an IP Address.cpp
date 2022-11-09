/*
Example-1 : 
-----------------------

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Example-2:
---------------
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

*/


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
