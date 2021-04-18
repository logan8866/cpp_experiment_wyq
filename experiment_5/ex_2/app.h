
template<class T1,class T2>
class  Test

{

public:

  void SetData1(T1 val) { data1=val; }

  void SetData2(T2 val) {data2=val; }

  T1 GetData1()  { return data1; }

  T2 GetData2() { return data2; }

private:

  T1 data1;

  T2 data2;

};
