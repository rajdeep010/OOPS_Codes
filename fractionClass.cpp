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

};