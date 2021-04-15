

class Shape{
	public:

		double primeter();
		double area();
		double volume();
		`
};

class Rechteck:public Shape{
	protected:
		double lange;
		double weite;
	public:
		Rechteck();
		Rechteck(double lange,double weite);
};

class Circle:public Shape{
	protected:
		double redius;
	public:
		Circle();
		Circle(double redius);
};

class Triangle:public Shape{
	protected:
		double lange_1;
		double lange_2;
		double angle_12;
	public:
		Triangle();
		Triangle(double lange_1,double lange_2,double angle_12);
}

class Box:public Rechteck{
	protected:
		double hohe;
	public:
		Box();
		Box(double lange, double weite,double hohe):Rechteck(lange,weite);
};

class Cylinder:public Circle{
	protected:
		double hohe;
	public:
		Cylinder();
		Cylinder(double redius,double hohe):Circle(redius);
};

class Cone:public Circle{
	protected:
		double hohe;
	public:
		Cone();
		Cone(double redius):Circle(redius);
};

class Pyramide:public Triangle{
	protected:
		double hohe;
	public:
		Pyramide();
		Pyramide(double lange_1,double lange_2,double angle,double hohe):Triangle(lange_1,lange_2,angle);
};

class Prism:public 
















