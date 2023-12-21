#pragma once

#include "NPC.hpp"
#include "Outlaw.hpp"
#include "Squirrel.hpp"

class Elf : public NPC {
  public:
    Elf(const int64_t, const int64_t);

    std::string get_type() override;

    void battle_cry() const override;

    bool accept(std::shared_ptr<NPC>) override;
    bool fight(Outlaw&) override;
    bool fight(Elf&) override;
    bool fight(Squirrel&) override;
};

