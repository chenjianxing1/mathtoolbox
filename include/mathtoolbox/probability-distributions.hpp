#ifndef PROBABILITY_DISTRIBUTIONS_HPP
#define PROBABILITY_DISTRIBUTIONS_HPP

namespace mathtoolbox
{
    // N(x | mu, sigma^2)
    double GetNormalDist(const double x, const double mu, const double sigma_2);

    // d/dx N(x | mu, sigma^2)
    double GetNormalDistDerivative(const double x, const double mu, const double sigma_2);

    // LogNormal(x | mu, sigma^2)
    double GetLogNormalDist(const double x, const double mu, const double sigma_2);

    // d/dx LogNormal(x | mu, sigma^2)
    double GetLogNormalDistDerivative(const double x, const double mu, const double sigma_2);

    // log{ LogNormal(x | mu, sigma^2) }
    double GetLogOfLogNormalDist(const double x, const double mu, const double sigma_2);

    // d/dx log{ LogNormal(x | mu, sigma^2) }
    double GetLogOfLogNormalDistDerivative(const double x, const double mu, const double sigma_2);
} // namespace mathtoolbox

#endif /* PROBABILITY_DISTRIBUTIONS_HPP */