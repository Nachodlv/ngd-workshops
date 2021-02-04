#pragma once

namespace consumer
{

class UObject
{

public:

	UObject() = default;

	bool IsValid() const { return false; }
};

template<typename T>
class TSharedPtr
{

public:

    TSharedPtr()
	{
		Instance = new T();
	}

	~TSharedPtr()
	{
		delete Instance;
		Instance = nullptr;
	}

	bool IsValid() const { return Instance != nullptr; }

	UObject* operator->() const { return Instance; }

private:

	T* Instance = nullptr;
};

void Consume(const TSharedPtr<UObject>& MyObject);

}  // namespace consumer
