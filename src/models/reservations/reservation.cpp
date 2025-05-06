#include "reservation.h"

Reservation::Reservation(std::string const& from, std::string const& to)
    : from(from)
    , to(to)
{
}

bool Reservation::isEmpty() const
{
    if (from == "" && to == "")
    {
        return true;
    }
    

    return false;
}

std::string Reservation::getDisplayText() const
{
    std::string displayText = from + " - " + to;

    return displayText;
}