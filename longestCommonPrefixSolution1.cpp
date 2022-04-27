class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        std::string temp;
            for(int j=0; j<strs[0].size();j++){
                std::string temp1 = strs[0].substr(0,j);
                int count =0;
                for(int i = 1; i<strs.size();i++){
                    if(strs[i].substr(0,j) == temp1){
                        count++;
                    }   
                    if(count == strs.size()-1){
                        temp = temp1;
                    }
                }
            }
    if(temp.size() > 0){
        return temp;
    }else{
    return "";    
        
    }    
    }
};
