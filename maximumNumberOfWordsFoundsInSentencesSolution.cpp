class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int wordCount = 0;
        for(int i=0;i<sentences.size();i++){
            int count = 1;
            for(int j=0;j<sentences[i].length();j++){
               if(sentences[i][j]==(' ')){
                   count++;
               } 
            }
            if(count > wordCount){
                wordCount = count;
            }
        }
     return wordCount;   
    }
};
