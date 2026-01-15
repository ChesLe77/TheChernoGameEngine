#pragma once

#include "Core.h"

namespace Hazel {

    class HAZEL_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // 在客户端Sandbox中定义
    // 用指针实现稳定的跨模态接口
    Application* CreateApplication();
}


