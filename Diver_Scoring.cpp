/*
** Program created by Jacob Plaisted.
** Program accepts input from judges of a diving competition
** Calculating there score. Using several functions.
*/

#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

//function prototypes
void getDegree(double& degree);
void getScores(double scores[], int numScores);
double sum(const double scores[], int numScores);
double highest(const double scores[], int numScores);
double lowest(const double scores[], int numScores);
double average(vector<double> finals);

int main(){
    int i = 0;
    double scoreSum, scoreMin, scoreMax;
    //Array and const - for # judges & storing scores
    const int numScores = 7;
    double degree;

    char addDiver = 'y';
    //vector to create each divers score.
    vector <double> diverScore;
    getDegree(degree);

    do {
        double scores[numScores];
        double degreeSum;

        getScores(scores, numScores);
        scoreSum = sum(scores, numScores);
        scoreMin = lowest(scores, numScores);
        scoreMax = highest(scores, numScores);

        degreeSum = scoreSum - scoreMin - scoreMax;         //removes the lowest and highest score
        degreeSum *= 0.6;
        diverScore.push_back(degreeSum);                  //pushes sum of degree of dif to diverscore

        cout << "Do you want to add another diver \n ('y' for yes | 'n' for no)" << endl;
        cin >> addDiver;
    } while (addDiver == 'y');


    for (int i = 0; i < diverScore.size(); ++i){                             //loops through each divers score
        cout << i+1 << " Divers Final Score: " << diverScore[i] << endl;    //outputs divers final score along with divers #
    }
    double averageScore = average(diverScore);                            //uses calc. in average func.
    cout << "Average of divers score is: " << averageScore << endl;      //to calculate the average scores of all divers.

    return 0;

}
//func. to get degree of difficulty score
void getDegree(double& degree){
    cout << "Enter Degree of Difficulty score \n";
    cin >> degree;

    while (degree < 1.2 || degree > 3.8){           //loops through til correct
        cout << "Invalid try again: ";             //input is added
        cin >> degree;
    }
    if (degree >= 1.2 && degree <= 3.8){
        cout << "Score " << setprecision(1) << fixed << degree << " added \n";
    }
}
//func. to get the inputted scores by judges
void getScores(double scores[], int numScores){


    for (int i = 0; i < numScores; ++i) {                 //loopers through numScores allowing 7 inputs                                              //checks for correct inputs.
        cout << "Enter judge number " << i+1 << " scores: \n";
        cin >> scores[i];

        while (scores[i] < 0 || scores[i] > 10){        //checks for incorrect inputs & reprompts if true
            cout << "Invald scores \ntry again: ";
            cin >> scores[i];
        }
    }
}
//func. to find sum of all inputed scores.
double sum(const double scores[], int numScores){
    double sum = 0;

    for (int i = 0; i < numScores; ++i){    //checks through the populated array
        sum += scores[i];                  //adds each element to sum
    }
    return sum;
}
//func. to the highest score of inputed scores.
double highest(const double scores[], int numScores){
    double max = 0;                           //sets max score to 0 (Min. possible score)

    for (int i = 0; i < numScores; ++i){    //Checks through populated array
        if (scores[i] > max){              //sets highest score to max. starting from zero.
            max = scores[i];
        }
    }
    return max;
}
//func. to find the lowest of inputted scores.
double lowest(const double scores[], int numScores){
    double min = 10;                         //sets the min score to 10(Max score possible)

    for (int i = 0; i < numScores; ++i){
        if (scores[i] < min){             //loops through setting new lowest score to min
            min = scores[i];
        }
    }
    return min;
}

double average(vector<double> finals){
    double sum = 0;

    for (int i = 0; i < finals.size(); ++i){        //loops through size of finals vector
        sum += finals[i];                          //adds each element in finals to each other
    }
    return sum / finals.size();                  //returns sum dividing by number of elements with-in finals vector.
}
