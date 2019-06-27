#ifndef _VECTOR_H_
#define _VECTOR_H_

//  ベクトルクラス
class Vector{
private:
    double m_x;
    double m_y;
public:
    //  コンストラクタ
    Vector();
    //  成分の設定
    Vector(double,double);
    void set(double x, double y);
    //  x成分の取得
    double getX();
    //  y成分の取得
    double getY();
};

#endif // _VECTOR_H_
