#pragma once
#include <cassert>
template <class T>
class Service
{
public:
    static void SetService(T* service)
    {
        ms_service = service;
    };
    static T* GetService()
    {
        assert(ms_service != nullptr);
        return ms_service;
    };
	static T* ms_service;

	Service() = delete;
};

template <typename T>
T* Service<T>::ms_service = nullptr;
