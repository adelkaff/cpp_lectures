#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

        //Yeezy count and vector variables:
        int yeezy750 {0};
        int yeezy350 {0};
        int yeezy950 {0};
        int yeezy350v2 {0};
        int yeezypowerphase {0};
        int yeezy500 {0};
        int yeezyquantum {0};
        int yeezy380 {0};
        int yeezy750v2 {0};
        int yeezy380v2 {0};

        //Nike count and vector variables:
        int nikeair1 {0};
        int nikeair2 {0};
        int nikeairmax1 {0};
        int nikecourtroyale2 {0};
        int niketanjun {0};
        int nikeairforce1 {0};
        int nikeairzoom {0};
        int nikecourtroyale3 {0};
        int nikeblazermid {0};
        int airmax95 {0};

        //Reebok count and vector variables:
        int royalultrasls {0};
        int clubcdoubles {0};
        int reeboklite3s {0};
        int runner4shoes {0};
        int royalultraslsv2 {0};

        
        auto print_items()
  {
        std::cout<<"You have\n" <<"Yeezys:\n" <<yeezy350<<" Yeezy boost 350's\n" <<yeezy950<< " Yeezy boost 950's\n" <<yeezy750 << " Yeezy boost 750's\n" <<yeezy350v2 << " Yeezy boost 350 V2's\n" << yeezypowerphase << " Yeezy Powerphase's\n" << yeezy500 << " Yeezy 500's\n" << yeezyquantum << " Yeezy boost Quantum's\n" << yeezy380 << " Yeezy 380's\n" << yeezy750v2 << " Yeezy boost 750 V2's\n" << yeezy380v2 << " Yeezy 380 V2's\n\n" <<"---------------------\n"
                << "Nike's:\n" <<nikeair1<<" Nike Air 1's\n" <<nikeair2<< " Nike Air 2's\n" <<nikeairmax1 << " Nike Air Max 1's\n" <<nikecourtroyale2 << " Nike Court Royale 2's\n" << niketanjun << " Nike Tanjun's\n" << nikeairforce1 << " Nike Air Force 1's\n" << nikeairzoom << " Nike Air Zoom's\n" << nikecourtroyale3 << " Nike Court Royale 3's\n" << nikeblazermid << " Nike Blazer Mid's\n" << airmax95 << " Air Max 95's\n\n" <<"---------------------\n"
                << "Reebok's:\n" <<royalultrasls<<" Royal Ultra Sls's\n" <<clubcdoubles<< " Club C Doubles's\n" <<reeboklite3s << " Reebok Lite 3s's\n" << runner4shoes << " Runner 4.0 Shoes's\n" << royalultraslsv2 << " Royal Ultra Sls V2's\n"<<"---------------------\n" <<std::endl;
  }


int main()
{
        double Balance= 100000;
        int option = 0;
        int option2 = 0;
        std::string new_brand {}; //variable to add brands
        constexpr auto MaxNum_of_items {25}; //max number of items in store


        enum allbrands {
          Yeezy,
          Nike,
          Reebok,
        };
        std::vector<std::string> allbrands = {"Yeezy", "Nike", "Reebok"};

  
        enum brand_yeezys {
          YeezyBoost750,
          YeezyBoost350,
          YeezyBoost950,
          YeezyBoost350V2,
          YeezyPowerphase,
          Yeezy500,
          YeezyBoostQuantum,
          Yeezy380,
          YeezyBoost750V2,
          Yeezy380V2,
        };
        std::vector<std::string> vbrand_yeezys = {"1= Yeezy Boost 750 ($350)", "2= Yeezy Boost 350 ($350)" ,"3= Yeezy Boost 950 ($450)","4= Yeezy Boost 350 V2 ($280)", "5= Yeezy Powerphase ($300)", "6= Yeezy 500 (400)", "7= Yeezy Boost Quantum ($290)", "8= Yeezy 380 ($330)", "9= Yeezy Boost 750 V2 ($250)", "10= Yeezy 380 V2 ($350)"};

  
        enum brand_nike {
          NikeAir1,
          NikeAir2,
          NikeAirMax1,
          NikeCourtRoyale2,
          NikeTanjun,
          NikeAirForce1,
          NikeAirZoom,
          NikecourtRoyale3,
          NikeBlazerMid,
          AirMax95,
        };
        std::vector<std::string> brand_nike = {"1= Nike Air 1 ($225)", "2= Nike Air 2 ($245)" ,"3= Nike Air Max 1 ($122)", "4= Nike Court Royale 2 ($82)", "5= Nike Tanjun ($82)", "6= Nike Air Force 1 ($135)", "7= Nike Air Zoom ($129)", "8= Nikecourt Royale 3 ($90)", "9= Nike Blazer Mid ($122)", "10= Air Max 95 ($210)"};


        // auto search_item() (Initial mistake 1)
// {
//         char option2 {};
//         std::cout << "(n)Search by Name:;
//         std::cin >> sopt;
//         if (sopt == 'n')
//         {
//                 std::string name {};
//                 std::cout << "Enter product name: ";
//                 std::cin >> name;
//                 return std::find_if(items.begin(), items.end(), [&](const Item& item) { return item.name == name; });
//         }


//         return items.end();        // if nothing is found then return the end of the items
// };
  
         enum brand_reebok {
          RoyalUltraSls,
          ClubCDoubles,
          ReebokLite3s,
          Runner4_0Shoes,
          RoyalUltraSlsV2,
        };
        std::vector<std::string> brand_reebok = {"1= Royal Ultra Sls ($68)", "2= Club C Doubles ($100)" ,"3= Reebok Lite 3s ($33)","4= Runner 4.0 Shoes ($60)", "5= Royal Ultra Sls V2 ($75)"};

        std::cout<< "|--------------------------------------------------------|"<<std::endl;
        std::cout<< "|                 Adel's Shoe Store                      |"<<std::endl;
        std::cout<< "|--------------------------------------------------------|"<<std::endl;

       
        do  {
                std::cout<< "\nWhich brand would you like to select? The options are: 1=Yeezy 2= Nike 3=Reebok or 0 to checkout.\n\n"<< "Alternatives:\nAdd brand=(4 or 5)\nEdit brand=(Reenter number used to add brand)\nDelete an item= (6)\nSearch an item= (7)"<<std::endl;
                std::cin>> option;


                if (option == 1)
                {
                        std::cout<< "Enter which Yeezy shoe you want or press 0 to checkout: Options are: "<<std::endl;
                        for (const std::string& Yeezys : vbrand_yeezys) {std:: cout<< Yeezys<<std::endl;}
                        std::cin>> option2;
                        

                        if (option2 == 1)
                        {
                                yeezy750++;//adds one item to yeezy boost 750
                                Balance= Balance - 350;
                                
                        }
                        if (option2 == 2)
                        {
                                yeezy350++;
                                Balance= Balance - 350;
                                
                        }
                        if (option2 == 3)
                        {
                                yeezy950++;
                                Balance= Balance - 450;
                                
                        }
                        if (option2 == 4)
                        {
                                yeezy350v2++;
                                Balance= Balance - 280;
                                
                        }
                        if (option2 == 5)
                        {
                                yeezypowerphase++;
                                Balance= Balance - 300;
                                
                        }
                        if (option2 == 6)
                        {
                                yeezy500++;
                                Balance= Balance - 400;
                                
                        }
                        if (option2 == 7)
                        {
                                yeezyquantum++;
                                Balance= Balance - 290;
                                
                        }
                        if (option2 == 8)
                        {
                                yeezy380++;
                                Balance= Balance - 330;
                                
                        }
                        if (option2 == 9)
                        {
                                yeezy750v2++;
                                Balance= Balance - 250;
                                
                        }
                        if (option2 == 10)
                        {
                                yeezy380v2++;
                                Balance= Balance - 350;
                                
                        }
                        if (option2 == 0 ) 
                        { 
                                print_items();
                                std::cout<<"Thank you for shopping!"<<std::endl;
                                std::cout<<"Total Balance is: "<< "$" <<100000-Balance<<std::endl;
                                break; 
                        }


                }
                else if (option ==2)
                {
                        std::cout<< "Enter which Nike shoe you want or press 0 to checkout: Options are: "<<std::endl;
                        for (const std::string& Nike : brand_nike) {std:: cout<< Nike<<std::endl;}
                        std::cin>> option2;

                        if (option2 == 1)
                        {
                                nikeair1++;//adds one item to yeezy boost 750
                                Balance= Balance - 225;
                                
                        }
                        if (option2 == 2)
                        {
                                nikeair2++;
                                Balance= Balance - 245;
                                
                        }
                        if (option2 == 3)
                        {
                                nikeairmax1++;
                                Balance= Balance - 122;
                                
                        }
                        if (option2 == 4)
                        {
                                nikecourtroyale2++;
                                Balance= Balance - 82;
                                
                        }
                        if (option2 == 5)
                        {
                                niketanjun++;
                                Balance= Balance - 82;
                                
                        }
                        if (option2 == 6)
                        {
                                nikeairforce1++;
                                Balance= Balance - 135;
                                
                        }
                        if (option2 == 7)
                        {
                                nikeairzoom++;
                                Balance= Balance - 129;
                                
                        }
                        if (option2 == 8)
                        {
                                nikecourtroyale3++;
                                Balance= Balance - 90;
                                
                        }
                        if (option2 == 9)
                        {
                                nikeblazermid++;
                                Balance= Balance - 122;
                                
                        }
                        if (option2 == 10)
                        {
                                airmax95++;
                                Balance= Balance - 210;
                                
                        }
                        if (option2 == 0 ) 
                        { 
                                print_items();
                                std::cout<<"Thank you for shopping!"<<std::endl;
                                std::cout<<"Total Balance is: "<< "$" <<100000-Balance<<std::endl;
                                break; 
                        }

                }
                else if (option == 3)
                {
                        std::cout<< "Enter which Reebok shoe you want or press 0 to checkout: Options are: "<<std::endl;
                        for (const std::string& Reebok : brand_reebok) {std:: cout<< Reebok<<std::endl;}
                        std::cin>> option2;

                        if (option2 == 1)
                        {
                                royalultrasls++;//adds one item to yeezy boost 750
                                Balance= Balance - 68;
                                
                        }
                        if (option2 == 2)
                        {
                                clubcdoubles++;
                                Balance= Balance - 100;
                                
                        }
                        if (option2 == 3)
                        {
                                reeboklite3s++;
                                Balance= Balance - 33;
                                
                        }
                        if (option2 == 4)
                        {
                                runner4shoes++;
                                Balance= Balance - 60;
                                
                        }
                        if (option2 == 5)
                        {
                                royalultraslsv2++;
                                Balance= Balance - 75;
                                
                        }
                        if (option2 == 0 ) 
                        { 
                                print_items();
                                std::cout<<"Thank you for shopping!"<<std::endl;
                                std::cout<<"Total Balance is: "<< "$" <<100000-Balance<<std::endl;
                                break; 
                        }

                }

                else if (option < 1 || option < 6)
                {
                        
                        if(option > 3 && option <=5)//to add operations/brands
                        {
                                std::cout << "Enter the new brand you would like to be added to the store: \n";
                                std::cin>> new_brand;
                                if (option == 4) 
                                {
                                        allbrands.push_back(new_brand); 
                                        std::cout<< "New brand added: " <<new_brand<<std::endl;
                                        continue;
                                }
                                else if (option == 5) 
                                {
                                        allbrands.push_back(new_brand);
                                        std::cout<< "New brand added: " <<new_brand<<std::endl;
                                        continue;
                                }

                        }

                        if (option == 0 ) 
                        { 
                                print_items();
                                std::cout<<"Thank you for shopping!"<<std::endl;
                                std::cout<<"Max number of Items in shop: "<< MaxNum_of_items<<std::endl;
                                std::cout<<"Total Balance is: "<< "$" <<100000-Balance<<std::endl;
                                std::cout<<"\n\nNew brands added: \n"<< new_brand<<std::endl;
                                break; 
                        }
                        
                        else if (option == 6)
                        {
                                std::cout<< "Which brand do you want to remove items from? Options are: 1= Yeezy 2= Nike 3= Reebok" <<std::endl;
                                std::cin>>option2;

                                if (option2 == 1)
                                {
                                        //to erase/delete an item in Yeezys:
                                        int num_of_erase {};
                                        std::cout<<"Enter which item in Yeezys shoes in number form(1st item = 1, second = 2 etc..) you would like to delete: ";
                                        std::cin>> num_of_erase;

                                        vbrand_yeezys.erase(vbrand_yeezys.begin() + (num_of_erase -1));
                                        std::cout<<"New list of items in Yeezys: "<<std::endl;
                                        for (const std::string& Yeezysshoes : vbrand_yeezys) {std:: cout<< Yeezysshoes<<std::endl;}
                                }
                                if (option2 == 2)
                                {
                                        //to erase/delete an item in Nike:
                                        int num_of_erase {};
                                        std::cout<<"Enter which item in Nike shoes in number form(1st item = 1, second = 2 etc..) you would like to delete: ";
                                        std::cin>> num_of_erase;

                                        brand_nike.erase(brand_nike.begin() + (num_of_erase -1));
                                        std::cout<<"New list of items in Nike: "<<std::endl;
                                        for (const std::string& Nikeshoes : brand_nike) {std:: cout<< Nikeshoes<<std::endl;}
                                }
                                if (option2 == 3)
                                {
                                        //to erase/delete an item in Reebok:
                                        int num_of_erase {};
                                        std::cout<<"Enter which item in Reebok shoes in number form(1st item = 1, second = 2 etc..) you would like to delete: ";
                                        std::cin>> num_of_erase;

                                        brand_reebok.erase(brand_nike.begin() + (num_of_erase -1));
                                        std::cout<<"New list of items in Reebok: "<<std::endl;
                                        for (const std::string& Reebokshoes : brand_reebok) {std:: cout<< Reebokshoes<<std::endl;}
                                }
                        }
                }
                        else if (option == 7)//to search for an item
                        {
                                std::cout << "Search by Name: 1= Yeezys item, 2= Nike item, 3= Reebok item\n";
                                std::cin >> option2;
                                if (option2 == 1)
                                {
                                        std::cout<<"Yeezys item names :\n";
                                        for (const std::string& Yeezys : vbrand_yeezys) {std:: cout<< Yeezys<<std::endl;};
                                        std::string name {};
                                        std::cout << "Enter product name: ";
                                        std::getline(std::cin >> std::ws, name);
                                        std::cout << "Name: " << name << '\n';
                                        const auto pyeezy = std::find_if(vbrand_yeezys.begin(), vbrand_yeezys.end(), [&](const std::string& Yeezy1) { return Yeezy1 == name; });
                                        if (pyeezy != vbrand_yeezys.end())
                                        {
                                                std::cout << "Yeezy found: " << *pyeezy << '\n'<<'\n';
                                        }
                                        else
                                        {
                                                std::cout<<"No items found"<<std::endl;
                                        }
                                }
                                else if (option2 == 2)
                                {
                                        std::cout<<"Nike item names :\n";
                                        for (const std::string& Nike : brand_nike) {std:: cout<< Nike<<std::endl;};
                                        std::string name {};
                                        std::cout << "Enter product name: ";
                                        std::getline(std::cin >> std::ws, name);
                                        std::cout << "Name: " << name << '\n';
                                        const auto pnike = std::find_if(brand_nike.begin(), brand_nike.end(), [&](const std::string& Nike1) { return Nike1 == name; });
                                        if (pnike != brand_nike.end())
                                        {
                                                std::cout << "Nike Found: " << *pnike << '\n'<<'\n';
                                        }
                                        else
                                        {
                                                std::cout<<"No items found"<<std::endl;
                                        }
                                }
                                else if (option2 == 3)
                                {
                                        std::cout<<"Reebok item names: \n";
                                        for (const std::string& Reebok : brand_reebok) {std:: cout<< Reebok<<std::endl;};
                                        std::string name {};
                                        std::cout << "Enter product name: ";
                                        std::getline(std::cin >> std::ws, name);
                                        std::cout << "Name: " << name << '\n';
                                        const auto preebok = std::find_if(brand_reebok.begin(), brand_reebok.end(), [&](const std::string& Reebok1) { return Reebok1 == name; });
                                        if (preebok != brand_reebok.end())
                                        {
                                                std::cout << "Reebok Found: " << *preebok << '\n'<<'\n';
                                        }
                                        else
                                        {
                                                std::cout<<"No items found"<<std::endl;
                                        }
                                }
                        }
                    
                
                
                        else if (option<0 || option>6)
                        {
                                std::cout << "Invalid operation selected. Please try again!"<<std::endl;
                                continue;
                        }
        }while (true);
        

/* initail mistake 2 
        for (const std::string& Yeezys : brand_yeezys) {std:: cout<< Yeezys<<std::endl;}//stores items in a new variable to be able to print it out
*/
}