#ifndef MAIN_CPP_ENUM_H
#define MAIN_CPP_ENUM_H

enum culoare_t {lipsa, negru, verde, rosu, galben, albastru, mov, cyan, roz};

inline std::ostream &operator<<(std::ostream& os, const culoare_t &cul)
{
    switch(cul)
    {
        case lipsa:
            os << "lipsa";
            break;
        case negru:
            os << "negru";
            break;
        case verde:
            os << "verde";
            break;
        case rosu:
            os << "rosu";
            break;
        case galben:
            os << "galben";
            break;
        case albastru:
            os << "albastru";
            break;
        case mov:
            os << "mov";
            break;
        case cyan:
            os << "cyan";
            break;
        case roz:
            os << "roz";
            break;
    }
    return os;
}

#endif
