#include <iostream>
#include <iomanip>

using namespace std;

double calculatePercentage(double stateRevenue, double totalRevenue) {
    return (stateRevenue / totalRevenue) * 100;
}

double calculateTotalRevenue(double sp, double rj, double mg, double es, double others) {
    return sp + rj + mg + es + others;
}

int main() {
    double revenueSP = 67836.43;
    double revenueRJ = 36678.66;
    double revenueMG = 29229.88;
    double revenueES = 27165.48;
    double revenueOthers = 19849.53;

    double totalRevenue = calculateTotalRevenue(revenueSP, revenueRJ, revenueMG, revenueES, revenueOthers);

    double percentageSP = calculatePercentage(revenueSP, totalRevenue);
    double percentageRJ = calculatePercentage(revenueRJ, totalRevenue);
    double percentageMG = calculatePercentage(revenueMG, totalRevenue);
    double percentageES = calculatePercentage(revenueES, totalRevenue);
    double percentageOthers = calculatePercentage(revenueOthers, totalRevenue);

    cout << fixed << setprecision(2);
    cout << "Percentual de representacao de cada estado:" << endl;
    cout << "SP: " << percentageSP << "%" << endl;
    cout << "RJ: " << percentageRJ << "%" << endl;
    cout << "MG: " << percentageMG << "%" << endl;
    cout << "ES: " << percentageES << "%" << endl;
    cout << "Others: " << percentageOthers << "%" << endl;

    return 0;
}
