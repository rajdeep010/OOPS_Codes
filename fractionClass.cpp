class Fraction {
    int nr;
    int dr;

public:
    Fraction(int a, int b) {
        nr = a;
        dr = b;
    }

    void print() const {
        cout << nr << "/" << dr << endl;
    }

    void add(Fraction const& f2) {
        int newDr = this->dr * f2.dr;
        int newNr = this->dr * f2.nr + this->nr * f2.dr;

        int gcd = __gcd(newDr, newNr);

        newDr /= gcd;
        newNr /= gcd;

        this->dr = newDr;
        this->nr = newNr;
    }

    Fraction operator+(Fraction const& f2) const {
        int newDr = this->dr * f2.dr;
        int newNr = this->dr * f2.nr + this->nr * f2.dr;

        int gcd = __gcd(newDr, newNr);

        newDr /= gcd;
        newNr /= gcd;

        Fraction ans(newNr, newDr);
        return ans;
    }

    Fraction operator*(Fraction const& f2) const {
        int newDr = this->dr * f2.dr;
        int newNr = this->nr * f2.nr;

        int gcd = __gcd(newDr, newNr);

        newDr /= gcd;
        newNr /= gcd;

        Fraction ans(newNr, newDr);
        return ans;
    }

    bool operator==(Fraction f2) const {
        return (this->dr == f2.dr and this->nr == f2.nr);
    }



    // pre-increment operator

    // return by reference
    // else if we do Fraction f6 =  ++(++f5)
    // f5 won't be updated twice
    // rather after first time increment it creates a copy of the returned fraction and update there
    // so if we want to do it properly return by reference 

    // so that it doesn't create a copy to do the next updation
    Fraction& operator++() {
        nr = nr + dr;
        int gcd = __gcd(nr, dr);
        nr /= gcd;
        dr /= gcd;

        // we want to return the current object's content
        return *this;
    }

};