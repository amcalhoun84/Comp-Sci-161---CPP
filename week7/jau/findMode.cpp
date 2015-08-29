#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;
vector<int>findMode(int[], int);



/*int main()

{

   const int arraySize = 6;

   int numbers[arraySize] = {1, 1, 2, 4, 4, 4};

  // vector<int> result; 



   //vector<int>findMode(numbers, arraySize);

   findMode(numbers, arraySize);

   return 0;

}*/

vector<int>findMode(int nums[], int size) 
{
   vector<int> result;
   int hiFreq = 0;
   int mode = 0;
  
   for (int i = 0; i < size; i++)
   {
      int count = 0;
      for ( int j = 0; j < size; j++)
      {
         if ( nums[i] == nums[j])
         {
            count++;
         }
      }
      if (count > hiFreq)
      {
          hiFreq = count;
       }
      count = 0;
  
      for(int k = 0; k < size; k++)
      {
         if(nums[i] == nums[k])
         {
            count++;
         }
      } 

       if(count == hiFreq)
      {
         mode = nums[i];
      }
      bool isIn = false;
             for (int k = 0; k < result.size(); k++)
             {
                if(mode == result[k])
                   isIn = true;

             }
             if ( isIn == false)
             {
                  result.push_back(mode);
             }
             
       sort(result.begin(), result.end());    
  }
   return result; 
}