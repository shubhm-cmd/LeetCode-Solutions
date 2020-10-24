//Easy solution 4ms

// Created string str using string s with all tha characters which can be a part of the palindrome, which means, considering only alphanumeric characters and ignoring cases.
// Then using while loop, reversing the string str and then comparing both the original and new strings to check if it forms a palindrome or not.

bool isPalindrome(string s) {
    string str;

    for(char c : s){
        if(isalnum(c)) {
            if((c >= 65 and c <= 90))
                c=c+32; // if char is Upper, convert to lower
            str+=c;
        }        
    }

    string rev = str;
    int n = rev.length()-1;
    int i = 0;

    //Reverse the string str
    while(i < n) {
        swap(rev[i],rev[n]);
        i++,n--;
    }

    if(str==rev)
        return true;
    return false;
}
