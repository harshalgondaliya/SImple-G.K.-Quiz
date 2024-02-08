#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;
    string name;
    string x;
    string store[20];
    cout<<"G.K. Quiz"<<endl;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"you have to atleast 33% for passing mark."<<endl;
    cout<<"total 20 marks of quiz."<<endl;

    cout<<"Are you ready for the quiz !! {yes or no}"<<endl;
    cin>>x;
    cout<<endl;
    if (x == "yes") {
        cout<<"Time : 10 Min"<<endl;
        cout<<"Here this is your quiz : ";
        cout<<endl;
        cout << "Question 1: What is the capital of India?" << endl;
        cout << "a) Delhi" << endl;
        cout << "b) Mumbai" << endl;
        cout << "c) Kolkata" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[0] = {"Delhi"};
        }

        cout << "Question 2: Which river is considered the lifeline of India?" << endl;
        cout << "a) Yamuna" << endl;
        cout << "b) Gangas" << endl;
        cout << "c) Brahmaputra" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "b" || answer == "B") {
            score++;
        }
        else{
            store[1] = {"Gangas"};
        }

        cout << "Question 3: What is the national animal of India?" << endl;
        cout << "a) Tiger" << endl;
        cout << "b) Elephant" << endl;
        cout << "c) Lion" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[2] = {"Tiger"};
        }

        cout << "Question 4: Which festival is known as the festival of lights in India?" << endl;
        cout << "a) Holi" << endl;
        cout << "b) Eid" << endl;
        cout << "c) Diwali" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[3] = {"Diwali"};
        }

        cout << "Question 5: What is the currency of India?" << endl;
        cout << "a) Rupiah" << endl;
        cout << "b) Rupee" << endl;
        cout << "c) Ringgit" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "b" || answer == "B") {
            score++;
        }
        else{
            store[4] = {"Rupee"};
        }

        cout << "Question 6: Which city is known as the Silicon Valley of India?" << endl;
        cout << "a) Bengaluru" << endl;
        cout << "b) Hyderabad" << endl;
        cout << "c) Chennai" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[5] = {"Bengaluru"};
        }

        cout << "Question 7: Who is known as the Father of the Indian Nation?" << endl;
        cout << "a) Mahatma Gandhi" << endl;
        cout << "b) Jawaharlal Nehru" << endl;
        cout << "c) Sardar Vallabhbhai Patel" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[6] = {"Mahatma Gandhi"};
        }

        cout << "Question 8: What is the name of the largest state in India by area?" << endl;
        cout << "a) Madhya Pradesh" << endl;
        cout << "b) Uttar Pradesh" << endl;
        cout << "c) Rajasthan" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[7] = {"Rajasthan"};
        }

        cout << "Question 9: Who composed the Indian national anthem?" << endl;
        cout << "a) Bankim Chandra Chattopadhyay" << endl;
        cout << "b) Swami Vivekananda" << endl;
        cout << "c) Rabindranath Tagore" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[8] = {"Rabindranath tagore"};
        }

        cout << "Question 10: Which mountain range forms the northern boundary of India?" << endl;
        cout << "a) Western Ghats" << endl;
        cout << "b) Himalayas" << endl;
        cout << "c) Eastern Ghats" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "b" || answer == "B") {
            score++;
        }
        else{
            store[9] = {"Himalayas"};
        }

        cout << "Question 11: What is the largest state in India by population?" << endl;
        cout << "a) Maharashtra" << endl;
        cout << "b) Bihar" << endl;
        cout << "c) Uttar Pradesh" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[10] = {"Uttar Pradesh"};
        }

        cout << "Question 12: Who was the first Prime Minister of India?" << endl;
        cout << "a) Jawaharlal Nehru" << endl;
        cout << "b) Indira Gandhi" << endl;
        cout << "c) Rajiv Gandhi" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[11] = {"Jawaharlal Nehru"};
        }

        cout << "Question 13: In which year did India gain independence from British rule?" << endl;
        cout << "a) 1942" << endl;
        cout << "b) 1950" << endl;
        cout << "c) 1947" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[12] = {"1947"};
        }

        cout << "Question 14: What is the national flower of India?" << endl;
        cout << "a) Rose" << endl;
        cout << "b) Jasmine" << endl;
        cout << "c) Lotus" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[13] = {"Lotus"};
        }

        cout << "Question 15: Which Indian city is famous for its tea industry?" << endl;
        cout << "a) Ooty" << endl;
        cout << "b) Darjeeling" << endl;
        cout << "c) Munnar" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "b" || answer == "B") {
            score++;
        }
        else{
            store[14] = {"Darjeeling"};
        }

        cout << "Question 16: Who is known as the Missile Man of India?" << endl;
        cout << "a) Dr. A.P.J. Abdul Kalam" << endl;
        cout << "b) Dr. Homi J. Bhabha" << endl;
        cout << "c) Dr. Vikram Sarabhai" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[15] = {"Dr. A.P.J. Abdul Kalam"};
        }

        cout << "Question 17: What is the name of the largest river island in India?" << endl;
        cout << "a) Majuli" << endl;
        cout << "b) Rameswaram" << endl;
        cout << "c) Diu" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[16] = {"Majuli"};
        }

        cout << "Question 18: Which Indian state is known as the 'Land of Five Rivers'?" << endl;
        cout << "a) Haryana" << endl;
        cout << "b) Gujarat" << endl;
        cout << "c) Punjab" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "c" || answer == "C") {
            score++;
        }
        else{
            store[17] = {"Punjab"};
        }

        cout << "Question 19: Who built the Taj Mahal?" << endl;
        cout << "a) Akbar" << endl;
        cout << "b) Shah Jahan" << endl;
        cout << "c) Aurangzeb" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "b" || answer == "B") {
            score++;
        }
        else{
            store[18] = {"Shah jahan"};
        }

        cout << "Question 20: Which Indian city is known as the City of Lakes?" << endl;
        cout << "a) Udaipur" << endl;
        cout << "b) Jaipur" << endl;
        cout << "c) Jodhpur" << endl;
        cout << "Your answer: ";
        cin >> answer; cout<<endl;
        if (answer == "a" || answer == "A") {
            score++;
        }
        else{
            store[19] = {"Udaipur"};
        }
        cout<<endl;
        cout<<"Your Wrong Answer only shown in this quiz !!"<<endl;
        for (int i = 0; i < 20; ++i) {
            if (!store[i].empty()) {
                cout << i+1 << ":  " << store[i] <<endl;
            } 
            else {
                cout << i+1 << ":  [Correct] " <<endl;
            }
        }

        float percentage = static_cast<float>(score) / 20 * 100;
        cout<<"Your Name  : "<<name<<endl;
        cout << "Your score: " << score << "/20" << endl;
        cout << "Percentage: " << static_cast<int>(percentage) << " %" << endl;
    }
    else {
        cout<<"|| Sorry !! for your time we taken a quiz later ||";
    }
    return 0;
}