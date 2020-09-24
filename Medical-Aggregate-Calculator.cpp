#include <iostream>
#include <limits>
using namespace std;


main()
{
    againStart:
    cout << endl;
    cout << "\tEnter marks of Matric: ";
    long double matricMarks;
    matricMarksAgain:
    while(!(cin >> matricMarks))
    {
        cout << "\tInvalid Input. Must be in Numbers. Enter again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (matricMarks > 1100 || matricMarks < 0)
    {
        cout << "\tMarks must be in between 0 and 1100. Enter again: ";
        goto matricMarksAgain;
    }
    long double matricaggregate;
    matricaggregate = ((matricMarks/1100)*100)*0.1;

    cout << endl;
    cout << "\tEnter marks of F.Sc: ";
    long double FscMarks;
    FscMarksAgain:
    while(!(cin >> FscMarks))
    {
        cout << "\tInvalid Input. Must be in Numbers. Enter again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (FscMarks > 1100 || FscMarks < 0)
    {
        cout << "\tMarks must be in between 0 and 1100. Enter again: ";
        goto FscMarksAgain;
    }
    long double fscAggregate;
    fscAggregate = ((FscMarks/1100)*100)*0.4;

    cout << endl;
    cout << "\tEnter marks of MdCat: ";
    long double mdcatMarks;
    mdcatMarksAgain:
    while(!(cin >> mdcatMarks))
    {
        cout << "\tInvalid Input. Must be in Numbers. Enter again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (mdcatMarks > 200 || mdcatMarks < 0)
    {
        cout << "\tMarks must be in between 0 and 200. Enter again: ";
        goto mdcatMarksAgain;
    }
    long double mdcataggregate;
    mdcataggregate = ((mdcatMarks/200)*100)*0.5;


    long double finalAggregate;
    finalAggregate = matricaggregate + fscAggregate + mdcataggregate;
    cout << endl;
    cout << "\tYour Aggregate: " << finalAggregate;    
    cout << endl << "\tDo you want to calculate another?" << endl;
    string answerofagain;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    answerofagainAgain:
    cout << "\t";
    getline(cin, answerofagain);
    if (answerofagain == "yes" || answerofagain == "YES" || answerofagain == "Yes" || answerofagain == "Y" || answerofagain == "y")
    {
        goto againStart;
    }
    else if (answerofagain == "no" || answerofagain == "NO" || answerofagain == "No" || answerofagain == "n" || answerofagain == "N")
    {
        cout << "\tThanks for using the program..." << endl << endl;
        exit(0);
    }
    else
    {
        cout << "\tDont understand that. Answer again: " << endl;
        goto answerofagainAgain;
    }
    return 0;
}
