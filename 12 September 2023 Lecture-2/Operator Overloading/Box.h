using namespace std;
class Box
{
private:
    double length, width, height;

public:
    void setLength(double l)
    {
        this->length = l;
    }
    void setWidth(double w)
    {
        this->width = w;
    }
    void setHeight(double h)
    {
        this->height = h;
    }
    double getVolume()
    {
        return length * width * height;
    }
    Box operator+(Box b)
    {
        Box box;
        box.length = this->length + b.length;
        box.width = this->width + b.width;
        box.height = this->height + b.height;
        return box;
    }
};