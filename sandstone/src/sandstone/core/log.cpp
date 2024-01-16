//
// Created by Daniel Secrieru on 16/01/2024.
//

#include <vector>

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

#include "log.hpp"

using namespace sandstone;

std::unique_ptr<logger> log::_eng_logger;
std::unique_ptr<logger> log::_app_logger;

log::~log() = default;

void log::init() {
    std::vector<spdlog::sink_ptr> log_sinks;
    log_sinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
    log_sinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("sandstone.log", true));

    log_sinks[0]->set_pattern("%^[%T] %n: %v%$");
    log_sinks[1]->set_pattern("[%T] [%l] %n: %v");

    _eng_logger = std::make_unique<logger>("eng", begin(log_sinks), end(log_sinks));
    _app_logger = std::make_unique<logger>("app", begin(log_sinks), end(log_sinks));
}
