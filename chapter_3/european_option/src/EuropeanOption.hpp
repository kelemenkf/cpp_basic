class EuropeanOption
{
private: 

  void init();
  void copy(const EuropeanOption& o2);
  double CalculateCallPrice() const;
  double CalculatePutPrice() const;
  double CalculateCallDelta() const;
  double CalculatePutDelta() const;

public: 

  double r; 
  double sigma;
  double K;
  double T;
  double U;
  double b;

  string optionType; 

public: 

  EuropeanOption();
  EuropeanOption(const EuropeanOption& option2);
  EuropeanOption(const string& optionType);

  virtual ~EuropeanOption();

  EuropeanOption& operator = (const EuropeanOption& option2);

  double Price() const;
  double Delta() const;

  void toggle();
};


