#pragma once
#include <string>

class ChucDanh {
private:
    std::string maCD, tenCD;
    double phuCapChucDanh;

public:
    ChucDanh();
    ChucDanh(const std::string& maCD, const std::string& tenCD, double phuCapChucDanh);

    std::string getMaCD() const;
    std::string getTenCD() const;
    double getPhuCap() const;
    void setTenCD(const std::string& ten);
    void setPhuCap(double pc);

    void hienThi() const;
    std::string toFileString() const;
};
