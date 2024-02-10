#include "../Utility/cpp.util.h" // cpp utility config for used includes
#include "../Utility/const.h" // holds varibles for used constants
#include "../External Libraries/json.hpp" // nlohmann json external library
#include "HelperClass.h" // header for helper classes
#include "DataStruct.h" // header for data structs

//  ------------------------------------------------
//  class TestHelper: definition of static class
//  ------------------------------------------------
using thlp = TestHelper;

// prints starting text
void thlp::startingText(){
    std::cout << "Welcome to TestQuest Pro v. 1.0 -- built by Worthington Technologies Inc." << '\n';
    std::cout << '\n';
}
// gets user input for name last name and id num and creates a userInfo instance
void thlp::getUserInfo(){
    // declare variables for user info
    std::string firstName;
    std::string lastName; 
    std::string idNum; 
    
    std::cout << "You first need to login with your information" << '\n' << '\n';
    // sytem control wait to continue
    std::cout << "Press any key to continue..." << '\n';
    _getch(); 
    system("cls"); // system control clear console
    // set user varibles from user input
    getUserInput(firstName, "first name");
    getUserInput(lastName, "last name");
    getUserInput(idNum, "id number");
    // use varibales to create a UserInfo structure
    UserInfo user = UserInfo(firstName, lastName, idNum);
}
// modifies a variable input with the user input specified by type
void thlp::getUserInput(std::string& input, const std::string& type){
    // declare a varible to store a user input
    char confirm; 
    // loop to get user input
    while(true){
        // prompt and store input
        std::cout << "Please enter your " << type << ": ";
        std::cin >> input;
        // clear buffer
        std::cin.ignore(STREAM_LIMIT, '\n');
        std::cin.clear();
        system("cls"); // system control clear terminal
        // test if failed
        if(std::cin.fail()){
            std::cout << "Failed to read input" << '\n';
        }
        else{
            // loop to confirm input
            while(true){
                // prompt and store input
                std::cout << "For " << type << " you entered: " << input << '\n';
                std::cout << "Is this correct (enter Y for yes, N for No): ";
                std::cin >> confirm;
                // clear buffer
                std::cin.ignore(STREAM_LIMIT, '\n');
                std::cin.clear();
                // translate to uppercase
                confirm = std::toupper(confirm);
                system("cls"); // system control clear terminal
                // test if fail
                if(std::cin.fail()){
                    std::cout << "Failed to read input" << '\n';
                    continue; // continue loop to confirm input
                }
                // test if invalid response
                else if(confirm != 'Y' && confirm != 'N'){
                    std::cout << "Invalid response" << '\n';
                    continue; // continue loop to confirm input
                }
                else if(confirm == 'Y'){
                    return; // break out of both loops and end function
                }
                else if(confirm == 'N'){
                    break; // break confirm input loop and return to get user input loop
                }
            }
        }
    }
}
// get user input for test key then finds and confirms the test selection
void thlp::getTestKey(const std::string& fileName, std::string& testKey){
    // declare a varible to store a user input
    char confirm;
    // loop to get user input
    while(true){
        // prompt and store input
        std::cout << "Please enter the test key: " << '\n';
        std::cin >> testKey;
        // clear buffer
        std::cin.ignore(STREAM_LIMIT, '\n');
        std::cin.clear();
        system("cls"); // system contril clear terminal
        // test if failed
        if(std::cin.fail()){
            std::cout << "Failed to read input" << '\n';
        }
        // check if valid test key
        else if(JsonHelper::checkObject(fileName, testKey)){
            // loop to confirm test
            while(true){
                // prompt and store input
                std::cout << "Test found: " << JsonHelper::getItem(fileName, testKey, "testName") << '\n';
                std::cout << "Is this the correct test (enter Y for yes, N for No): " << '\n';
                std::cin >> confirm;
                // clear buffer
                std::cin.ignore(STREAM_LIMIT, '\n');
                std::cin.clear();
                // translate to uppercase
                confirm = std::toupper(confirm);
                system("cls"); // system contril clear terminal
                // test if fail
                if(std::cin.fail()){
                    std::cout << "Failed to read input" << '\n';
                    continue; // continue loop to confirm test
                }
                // test if invalid response
                else if(confirm != 'Y' && confirm != 'N'){
                    std::cout << "Invalid response" << '\n';
                    continue; // continue loop to confirm test
                }
                else if(confirm == 'Y'){
                    return; // break out of both loops and end function
                }
                else if(confirm == 'N'){
                    break; // break confirm test loop and return to get user input loop
                }
            }
        }
        else{
            std::cout << "Couldn't find test" << '\n';
            continue; // continue loop to get user input
        }
    }
}
// assigns values to other test info testName and numSections
void thlp::getTestInfo(const std::string& fileName, const std::string& testKey, std::string& testName, int& numSections){
    // take string outputs and assign to variables convert to int where neccasary
    testName = JsonHelper::getItem(fileName, testKey, "testName");
    numSections = stoi(JsonHelper::getItem(fileName, testKey, "numSections"));
}
// builds test after finding test and pulling information
void thlp::createTest(){
    std::string fileName = "Utility/Test.json"; // define path to test.json
    std::cout << "Next lets find your test" << '\n';
    // system control wait to continue
    std::cout << "Press any key to continue..." << '\n';
    _getch(); 
    system("cls"); // system control clear console
    std::string testKey;
    std::string testName;
    int numSections; 
    getTestKey(fileName, testKey);
    getTestInfo(fileName, testKey, testName, numSections);
    TestInfo testInfo = TestInfo(testKey, testName, numSections);
}

//  ------------------------------------------------
//  class JsonHelper: definition of static class
//  ------------------------------------------------
using jhlp = JsonHelper;

// parses json file into a nlohmann json object
void jhlp::parseJson(const std::string& fileName, nlohmann::json& json){
    // create file stream from json file
    std::ifstream fileStream(fileName);
    try{
        // check if json succesfully opened
        if(fileStream.is_open()){
            // parse file stream onto json object and close file
            fileStream >> json;
            fileStream.close();
        }
        else{
            throw std::runtime_error("Failed to open file " + fileName); // error when can open file
        }
    }
    // catches error that file couldnt open or that there was a problem parsing
    catch(const std::runtime_error& e){
        std::cerr << "Error: " << e.what() << '\n';
        std::cout << "Press any key to exit program..." << '\n';
        _getch();
        std::exit(EXIT_FAILURE);
    }
}
// checks if given object exsist in the file
bool jhlp::checkObject(const std::string& fileName, const std::string& object){
    // create and parse json file
    nlohmann::json json;
    parseJson(fileName, json);
    // use iterator pointer to find specified object
    auto objectIt = json.find(object);
    // check if item exsist and is an object
    if(objectIt != json.end() && objectIt->is_object()){
        return true;
    }
    else{
        return false;
    }
}
// check if item exsist in given object in file
bool jhlp::checkItem(const std::string& fileName, const std::string& object, const std::string& item){
    // create and parse json file
    nlohmann::json json;
    parseJson(fileName, json);
    // check if object is valid
    if(checkObject(fileName, object)){
        // use iterator pointer to find specified item
        auto itemIt = json[object].find(item);
        // check if item exsist
        if(itemIt != json[object].end()){
            return true;
        }
        else{
            return false; // return when object exsist but item does not
        }
    }
    else{
        return false; // return when object does not exsist
    }
}
// returns item in given object in file as a string
std::string jhlp::getItem(const std::string& fileName, const std::string& object, const std::string& item){
    // create and parse json fileatible with "<error-type
    nlohmann::json json;
    parseJson(fileName, json);
    try{
        //check if item exsist in specified object
        if(checkItem(fileName, object, item)){
            return json[object][item]; // return item at specified object
        }
        else{
            throw std::runtime_error("Object or item does not exist in " + fileName); // error when item cant be found
        }
    }
    // cathch error that item or object doesnt exsist
    catch(const std::runtime_error& e){
        std::cerr << "Error: " << e.what() << '\n';
        std::cout << "Press any key to exit program..." << '\n';
        _getch();
        std::exit(EXIT_FAILURE);
    }
}
