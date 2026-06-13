#pragma once
ref class House
{
private:
	int id;
	System::String^ address;
	int houseNumber;
	int commissionYear;
	int floorsNumber;
	double livingArea;
	double totalArea;

public:
	House() {
		id = 0;
		address = "";
		houseNumber = 0;
		commissionYear = 0;
		floorsNumber = 0;
		livingArea = 0.0;
		totalArea = 0.0;
	}

	House(int id, System::String^ address, int houseNumber, int commissionYear, int floorsNumber, double livingArea, double totalArea) {
		this->id = id;
		this->address = address;
		this->houseNumber = houseNumber;
		this->commissionYear = commissionYear;
		this->floorsNumber = floorsNumber;
		this->livingArea = livingArea;
		this->totalArea = totalArea;
	}

	System::Void setId(int id) {
		this->id = id;
	}

	System::Void setAddress(System::String^ address) {
		this->address = address;
	}

	System::Void setHouseNumber(int houseNumber) {
		this->houseNumber = houseNumber;
	}

	System::Void setCommissionYear(int commissionYear) {
		this->commissionYear = commissionYear;
	}

	System::Void setFloorsNumber(int floorsNumber) {
		this->floorsNumber = floorsNumber;
	}

	System::Void setLivingArea(double livingArea) {
		this->livingArea = livingArea;
	}

	System::Void setTotalArea(double totalArea) {
		this->totalArea = totalArea;
	}

	int getId() {
		return id;
	}

	System::String^ getAddress() {
		return address;
	}

	int getCommissionYear() {
		return commissionYear;
	}

	int getFloorsNumber() {
		return floorsNumber;
	}

	double getLivingArea() {
		return livingArea;
	}

	double getTotalArea() {
		return totalArea;
	}
};

