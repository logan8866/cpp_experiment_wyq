

class Geometric_shape{
	public:

		virtual double perimeter();
		virtual double area();
		virtual double volume();
		virtual void Show();
};

class Rectangle:public Geometric_shape{
	protected:
		double lange;
		double weite;
	public:
		Rectangle();
		Rectangle(double lange,double weite);
		double perimeter();
		double area();
};

class Circle:public Geometric_shape{
	protected:
		double redius;
	public:
		Circle();
		Circle(double redius);
		double perimeter();
                double area();
};

class Triangle:public Geometric_shape{
	protected:
		double lange_1;
		double lange_2;
		double lange_3;
	public:
		Triangle();
		Triangle(double lange_1,double lange_2,double lange_3);
		double perimeter();
                double area();
};

class Box:public Rectangle{
	protected:
		double hohe;
	public:
		Box();
		Box(double lange, double weite,double hohe);
		double volume();
};

class Cylinder:public Circle{
	protected:
		double hohe;
	public:
		Cylinder();
		Cylinder(double redius,double hohe);
		double volume();
};

class Cone:public Circle{
	protected:
		double hohe;
	public:
		Cone();
		Cone(double redius,double hohe);
		double volume();
};

class T_pyramid:public Triangle{
	protected:
		double hohe;
	public:
		T_pyramid();
		T_pyramid(double lange_1,double lange_2,double lange_3,double hohe);
		double volume();
};

class T_prism:public Triangle{
	protected:
		double hohe;
	public:
		T_prism();
		T_prism(double lange_1,double lange_2,double lange_3,double hohe);
		double volume();
};
















