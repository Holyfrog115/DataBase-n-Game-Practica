#pragma once
#include "House.h"
ref class searchData
{
public:
	bool isFilterActive;
	System::Collections::Generic::List<House^>^ filteredHousesList;
	System::String^ addressSearch;
	array<int>^ houseNumberRange = gcnew array<int>(2);
	array<int>^ commissionYearRange = gcnew array<int>(2);
	array<int>^ floorsNumberRange = gcnew array<int>(2);
	array<int>^ appartmentsNumberRange = gcnew array<int>(2);
	array<int>^ livingAreaRange = gcnew array<int>(2);
	array<int>^ totalAreaRange = gcnew array<int>(2);
	
	searchData() {
		addressSearch = "";
		houseNumberRange[0] = -1;
		houseNumberRange[1] = -1;
		commissionYearRange[0] = -1;
		commissionYearRange[1] = -1;
		floorsNumberRange[0] = -1;
		floorsNumberRange[1] = -1;
		appartmentsNumberRange[0] = -1;
		appartmentsNumberRange[1] = -1;
		livingAreaRange[0] = -1;
		livingAreaRange[1] = -1;
		totalAreaRange[0] = -1;
		totalAreaRange[1] = -1;
		filteredHousesList = gcnew System::Collections::Generic::List<House^>();
		isFilterActive = false;
	}
};

