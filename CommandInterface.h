#pragma once

/**
 * Interface for commands.
 */

class ICommandInterface
{

public:
    virtual ~ICommandInterface() {}
    virtual int execute() = 0;

};
