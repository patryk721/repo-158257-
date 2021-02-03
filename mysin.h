#ifndef MYSIN_H
#define MYSIN_H


/ *!
  Klasa MySin
* /
class MySin
{
	
	
    public:
		/**metoda publiczna MySin()*/
        MySin();
		/**metoda publiczna void MySin(double x)*/
        MySin(double x);
		/**metoda publiczna void MySin(const MySin x)*/
        MySin(const MySin x);
		/**metoda publiczna ~MySin()*/
        ~MySin();
		/**metoda publiczna double value()*/
        double value();
		/**metoda publiczna void setX(double)*/
        void setX(double);
		/**metoda publiczna double getX()*/
        double getX();
	

        private:
	/**Funkcja value ma zwracać wartość sin(x)
	, która jest wyliczona na podstawie pierwszych 10 wyrazów szeregu 
	* \f$\sin(x)=\sum_{k=0}^\infty(-1)^k\frac{x^{2k+1}}{(2k+1)!}\f$
	*  \image html funkcja.png

*/
            double mX();
};

#endif // MYSIN_H
			