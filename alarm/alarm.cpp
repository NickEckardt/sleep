#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string> 
#include <unistd.h>

using namespace std;

string twoDigit(int a)
{
        if(a < 10)
        {
        	return "0" + to_string(a);
        }
        else
        {
	        return to_string(a);
	}
}


int main(int argc, char** argv)
{
	int hour_in;
	int minute_in;
	string am_or_pm;
	char delimeter;

	cout << "Enter Target Time: <hour>:<minute><am/pm>. Ex. 4:00pm" << endl;

	cin >> hour_in >> delimeter >> minute_in >> am_or_pm;
	
	//cout << "Hour = " << hour_in << "\tMinute = " << minute_in << am_or_pm << endl;
	if(am_or_pm == "pm")
	{
		hour_in += 12;
	}
	else if(am_or_pm != "am")
	{
		cout << "wrong format of <am/pm>. Ex. \"12:00am\"" << endl;
		return 1;
	}
	bool alarmStarted = false;
	
	for(;;)
	{
		time_t currentTime;
		struct tm* localTime;
		time( &currentTime );
		localTime = localtime( &currentTime);
		
		//test that the time struct is working
		//cout << localTime->tm_hour << localTime->tm_sec << endl;

		struct tm targetTime = *localtime(&currentTime);
		targetTime.tm_hour = hour_in;
		targetTime.tm_min = minute_in;
		targetTime.tm_sec = 0;
		
		int seconds = difftime( mktime(&targetTime), currentTime);
		if(seconds < 0)
		{
			targetTime.tm_mday += 1;
		}
		seconds = difftime( mktime(&targetTime), currentTime);

		//cout << seconds << endl;

                cout    << "Target Time: "
                        << twoDigit(hour_in) << ":"
                        << twoDigit(minute_in)
                        << "\tCurrent time: "
                        << twoDigit(localTime->tm_hour) << ":"
                        << twoDigit(localTime->tm_min) << "."
                        << twoDigit(localTime->tm_sec)
                        <<"\t started? "
                        << alarmStarted << "\tWill Start in "
                        << twoDigit((seconds%(3600 * 24))/3600) << ":"
                        << twoDigit((seconds%3600)/60) << "."
                        << twoDigit(seconds%60)
                        << "\r" << flush;

		if(!alarmStarted && (seconds < 10))
		{
			alarmStarted = true;
			string cmd = "vlc " + string(argv[1]);
			//system("vlc ~/Music/alarm/1");
			system(cmd.c_str());
		}


		if(seconds >= 10)
		{
			alarmStarted = false;
		}

		usleep(100000);
	}

	return 0;
}
