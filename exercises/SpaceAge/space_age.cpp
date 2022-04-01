#include "space_age.h"
#include <iostream>

namespace space_age {
	const int earth_seconds = 31557600;
	space_age::space_age(long long sec)
	{
		age_seconds = sec;
	}
	long long space_age::seconds() const
	{
		return age_seconds;
	}
	double space_age::on_mercury() const
	{
		return on_any(0.2408467);
	}
	double space_age::on_venus() const
	{
		return on_any(0.61519726);
	}
	double space_age::on_earth() const
	{
		return on_any(1.0);
	}
	double space_age::on_mars() const
	{
		return on_any(1.8808158);
	}
	double space_age::on_jupiter() const
	{
		return on_any(11.862615);
	}
	double space_age::on_saturn() const
	{
		return on_any(29.447498);
	}
	double space_age::on_uranus() const
	{
		return on_any(84.016846);
	}
	double space_age::on_neptune() const
	{
		return on_any(164.79132);
	}
	double space_age::on_any(double period) const
	{
		return age_seconds / (period * earth_seconds);
	}
} 