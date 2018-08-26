#ifndef ICOMMAND_RESULT_H_
#define ICOMMAND_RESULT_H_

class ICommand_result
{
public:
    virtual ~ICommand_result() = default;
    virtual bool is_done() = 0;
};

#endif // ICOMMAND_RESULT_H_
