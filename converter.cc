using namespace std;
#include <iostream>
#include <vector>


class SingletonConverter
{
   public:
       static SingletonConverter* getInstance( ) {
       
       	    static SingletonConverter* instance;
            return instance;
       
       };
       ~SingletonConverter( );
        float fromFtoC(float temp) {
            return ((temp-32)/1.8);
        };
   private:
       SingletonConverter( );
};


int main()
{
    
    std::vector<float> allTemps;
   
    SingletonConverter *c0 = SingletonConverter::getInstance();

    float temp = 0;
     
    while(temp != -1) {
     
      std::cout << "Temperature? or -1 to stop entering" << "\n";
       
      std::cin >> temp;

      
      allTemps.push_back(temp);
    
    
    }
    
    allTemps.pop_back();

    std::cout << allTemps.size() << " temperatures stored!" << "\n";
    
    float avgTemp = 0;
    
    // for (int i=0; i<allTemps.size(); i++) {
    for(auto i: allTemps) {
        
        // avgTemp += allTemps[i];
        avgTemp += i;
        
    }
    
    avgTemp /= allTemps.size();
    
    std::cout << "Avg temp: " << avgTemp << "\n";


}
