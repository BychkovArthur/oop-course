#pragma once

#include "FigureValidator.hpp"

class TrapezoidValidator : public FigureValidator {
    static void validateNumberOfVertices(const std::vector<Point>&);
    static void validateParallelLines(const std::vector<Point>&);

   public:
    void validate(const std::vector<Point>&) override;
};
