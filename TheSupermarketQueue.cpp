long queueTime(std::vector<int> customers,int n)
{
std::vector<int> tills(n);                     //initialising vector with space for n number of tills
for(int i =0; i <customers.size(); i++)
{
    tills[0] += customers[i];                  //adding time taken by the first person for the first till 
    std::sort(tills.begin(), tills.end());     //ascending sort to make sure the free till gets the next person
}
return tills[n - 1];                           //returning the last till since it will contain the time it took for the whole queue
}
