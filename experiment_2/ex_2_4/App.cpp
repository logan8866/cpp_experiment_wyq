class myPoint {  

public:

   myPoint(double x0=0.0,double y0=0.0):x(x0),y(y0) {}

   myPoint(myPoint &np):x(np.x),y(np.y) {}

   double GetX() { return x;}

   double GetY() {return y;}

   void SetX(double x0) {x=x0;}

   void SetY(double y0) {y=y0;} 

   void SetPoint(double x0,double y0) {x=x0;y=y0;}

   void SetPoint(myPoint &np) { x=np.x; y=np.y;}

   double  GetLength(myPoint p) {

     return sqrt((x-p.x)*(x-p.x) +(y-p.y)*(y-p.y));

   }

   void Printit() { cout<<" ("<<x<<","<<y<<") ";}

private:

   double x ,y;

};


