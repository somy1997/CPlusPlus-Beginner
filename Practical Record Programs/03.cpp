/*3. DEFINE A CLASS TOUR HAVING FOLLOWING MEMBERS,AND DECLARE OBJECT OF THIS CLASS TO CALL VARIOUS FUNCTION OF THIS CLASS
			PRIVATE : TCode string
					 integer NoofAdults
					 integer NoofKids
					 integer Kilometres
					 float TotalFare
						PUBLIC : EnterTour() - to read the values of datamembers
		 fare() - to calculate the fare according to the fare chart given :
 (Distance)kilometers        (fare)
	Kilometres < 500		Adults  200Rs	          		Kids     100Rs

	500=<Kilometres<1000	Adults  300Rs	          		Kids     150Rs

	Kilometres >=1000		Adults  500Rs	          		Kids     250Rs */

#include <iostream.h>
#include <stdio.h>
class tour
	{
		char tcode [100];
		int noofkids;
		int noofadults;
		int kilometres;
		float totalfare;

	public:

		void entertour()
			{
				cout<<"Enter Tour Code : ";
				gets(tcode);
				cout<<"\nEnter Number of Adults on Tour : ";
				cin>>noofadults;
				cout<<"\nEnter Number of kids on Tour : ";
				cin>>noofkids;
				cout<<"\nEnter Distance of Journey : ";
				cin>>kilometres;
			}
		void fare()
			{
				if (kilometres<500)
					totalfare = noofadults*200 + noofkids*100;
				if (kilometres>=500 && kilometres<1000)
					totalfare = noofadults*300 + noofkids*150;
				if (kilometres>=1000)
					totalfare = noofadults*500 + noofkids*250;
				cout<<"Total Fare : "<<totalfare;
			}
	};

void main()
	{
		tour t;
		t.entertour();
		t.fare();
	}



