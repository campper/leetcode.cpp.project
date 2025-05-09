//
// Created by alxor on 10/12/2023.
//
#include <cstddef>
#include <vector>
#include "FileOps.h"
#include "SequenceST.h"
#include "BinarySearchTree.h"

using namespace std;

int main()
{
    string filename = "bible.txt";
    vector<string> words;
    if( FileOps::readFile(filename,words)){
        cout<<"There are totally "<<words.size() <<" words in "<<filename;
        cout <<endl;

        //test BST
        time_t startTime = clock();
        BST<string,int> bst =  BST<string,int>();
        for(vector<string>::iterator iter=words.begin();iter != words.end();iter++){
            int *res = bst.search(*iter);
            if(res == NULL){
                bst.insert(*iter,1);
            } else{
                (*res)++;
            }
        }
        cout<<"'god' :"<< *bst.search("god")<<endl;
        time_t endTime = clock();
        cout<<"BST time "<<double(endTime-startTime)/CLOCKS_PER_SEC<< " s." << endl;

        // 测试顺序查找表 SST
        startTime = clock();

        // 统计圣经中所有词的词频
        // 注: 这个词频统计法相对简陋, 没有考虑很多文本处理中的特殊问题
        // 在这里只做性能测试用
        SequenceST<string, int> sst = SequenceST<string, int>();
        for (vector<string>::iterator iter = words.begin(); iter != words.end(); iter++) {
            int *res = sst.search(*iter);
            if (res == NULL)
                sst.insert(*iter, 1);
            else
                (*res)++;
        }

        // 输出圣经中god一词出现的频率
        if(sst.contain("god"))
            cout << "'god' : " << *sst.search("god") << endl;
        else
            cout << "No word 'god' in " << filename << endl;

        endTime = clock();

        cout << "SST , time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s." << endl;

    }
    return 0;
}