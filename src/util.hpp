#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

inline void init_logger()
{
    spdlog::drop_all();

    static std::shared_ptr<spdlog::logger> logger = spdlog::stderr_color_st("mana");
    spdlog::set_default_logger(logger);
    logger->set_level(spdlog::level::trace);

    logger->set_pattern("%v");
    logger->trace("");

    // [HH:MM:SS:MS] loglvl -- msg
    logger->set_pattern("[%H:%M:%S:%e] [%^%l%$]: %v");

    // -- keeping this in case it's needed later. doubt, though.
    // logger->set_pattern("%v");
    // logger->info("\n--- Mana Log Levels ---");
    // logger->trace("High verbosity logs for tracking current operations.");
    // logger->info("Medium verbosity logs for tracking noteworthy operations.");
    // logger->debug("For tracking critical operations and important information.");
    // logger->warn("Logs potentially risky operations.");
    // logger->error("Logs recoverable errors.");
    // logger->critical("Logs unrecoverable errors.\n");
    // logger->set_pattern("[%H:%M:%S:%e] [%^%l%$]: %v");
}
