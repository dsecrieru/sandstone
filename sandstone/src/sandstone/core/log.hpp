//
// Created by Daniel Secrieru on 16/01/2024.
//

#ifndef SANDSTONE_LOG_HPP
#define SANDSTONE_LOG_HPP

#include <memory>

#include "logger.hpp"

namespace sandstone {
    class log {
    public:
        static void init();

        static std::unique_ptr<logger>& eng_logger() { return _eng_logger; }
        static std::unique_ptr<logger>& app_logger() { return _app_logger; }

    private:
        ~log();

        static std::unique_ptr<logger> _eng_logger;
        static std::unique_ptr<logger> _app_logger;
    };
}

#define ss_eng_logt(...) ::sandstone::log::eng_logger()->trace(__VA_ARGS__)
#define ss_eng_logi(...) ::sandstone::log::eng_logger()->info(__VA_ARGS__)
#define ss_eng_logw(...) ::sandstone::log::eng_logger()->warn(__VA_ARGS__)
#define ss_eng_loge(...) ::sandstone::log::eng_logger()->error(__VA_ARGS__)
#define ss_eng_logc(...) ::sandstone::log::eng_logger()->critical(__VA_ARGS__)

#define ss_logt(...) ::sandstone::log::app_logger()->trace(__VA_ARGS__)
#define ss_logi(...) ::sandstone::log::app_logger()->info(__VA_ARGS__)
#define ss_logw(...) ::sandstone::log::app_logger()->warn(__VA_ARGS__)
#define ss_loge(...) ::sandstone::log::app_logger()->error(__VA_ARGS__)
#define ss_logc(...) ::sandstone::log::app_logger()->critical(__VA_ARGS__)

#endif //SANDSTONE_LOG_HPP
