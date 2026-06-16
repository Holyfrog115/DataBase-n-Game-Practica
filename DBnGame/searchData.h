#include "House.h"

#pragma once
ref class searchData
{
public:
	bool isFilterActive = false;
	System::Collections::Generic::List<House^>^ filteredHousesList;
	System::String^ addressSearch;
	array<int>^ houseNumberRange = gcnew array<int>(2);
	array<int>^ commissionYearRange = gcnew array<int>(2);
	array<int>^ floorsNumberRange = gcnew array<int>(2);
	array<int>^ appartmentsNumberRange = gcnew array<int>(2);
	array<int>^ livingAreaRange = gcnew array<int>(2);
	array<int>^ totalAreaRange = gcnew array<int>(2);
};

