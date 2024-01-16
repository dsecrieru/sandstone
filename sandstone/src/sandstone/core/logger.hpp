//
// Created by Daniel Secrieru on 15/01/2024.
//

#ifndef SANDSTONE_LOGGER_HPP
#define SANDSTONE_LOGGER_HPP

#include <string>
#include <memory>

#include <spdlog/spdlog.h>

namespace sandstone {
    class logger {
    public:
        template<typename... Args>
        explicit logger(Args &&... args) : _logger(std::make_shared<spdlog::logger>(std::forward<Args>(args)...)) {
            spdlog::register_logger(_logger);
            _logger->set_level(spdlog::level::trace);
            _logger->flush_on(spdlog::level::trace);
        }

        template<typename... Args>
        void trace(Args &&... args) { _logger->trace(std::forward<Args>(args)...); }

        template<typename... Args>
        void info(Args &&... args) { _logger->info(std::forward<Args>(args)...); }

        template<typename... Args>
        void warn(Args &&... args) { _logger->warn(std::forward<Args>(args)...); }

        template<typename... Args>
        void error(Args &&... args) { _logger->error(std::forward<Args>(args)...); }

        template<typename... Args>
        void critical(Args &&... args) { _logger->critical(std::forward<Args>(args)...); }

    private:
        std::shared_ptr<spdlog::logger> _logger;
    };
}

#endif //SANDSTONE_LOGGER_HPP
