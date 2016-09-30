//..............................................................................
#include "tsk3000_reg.h"
//..............................................................................

//..............................................................................
void SetStatusRegister(unsigned int value)
{
    __mtc0(value,COP_Status);
}
//..............................................................................

//..............................................................................
unsigned int GetStatusRegister(void)
{
    return __mfc0(COP_Status);
}
//..............................................................................

//..............................................................................
void SetEnabledInterrupts(unsigned int value)
{
    __mtc0(value,COP_InterruptEnable);
}
//..............................................................................

//..............................................................................
unsigned int GetEnabledInterrupts(void)
{
    return __mfc0(COP_InterruptEnable);
}
//..............................................................................

//..............................................................................
void ClearInterruptEdgeFlags(unsigned int value)
{
    __mtc0(value,COP_InterruptPending);
}
//..............................................................................

//..............................................................................
unsigned int GetPendingInterrupts(void)
{
    return __mfc0(COP_InterruptPending);
}
//..............................................................................

//..............................................................................
unsigned int GetHighestPendingInterrupt(void)
{
    return (__mfc0(COP_Status) >> 11) & 0x1F;
}
//..............................................................................

//..............................................................................
unsigned int GetTimeBase_LO(void)
{
    return __mfc0(COP_TimebaseLO);
}
//..............................................................................

//..............................................................................
unsigned int GetTimeBase_HI(void)
{
    return __mfc0(COP_TimebaseHI);
}
//..............................................................................

//..............................................................................
void SetIntervalTimer(unsigned int value)
{
    __mtc0(value,COP_Compare);
}
//..............................................................................

//..............................................................................
unsigned int GetIntervalTimer(void)
{
    return __mfc0(COP_Compare);
}
//..............................................................................

//..............................................................................
void ResetIntervalTimer(void)
{
    SetStatusRegister(GetStatusRegister() | ( Status_IntervalTimerReset));
    SetStatusRegister(GetStatusRegister() & (~Status_IntervalTimerReset));
}
//..............................................................................

//..............................................................................
void SetExceptionReturn(unsigned int value)
{
    __mtc0(value,COP_ExceptionReturn);
}
//..............................................................................

//..............................................................................
unsigned int GetExceptionReturn(void)
{
    return __mfc0(COP_ExceptionReturn);
}
//..............................................................................

//..............................................................................
void SetExceptionBase(unsigned int value)
{
    __mtc0(value,COP_ExceptionBase);
}
//..............................................................................

//..............................................................................
unsigned int GetExceptionBase(void)
{
    return __mfc0(COP_ExceptionBase);
}
//..............................................................................

//..............................................................................
void SetInterruptMode(unsigned int value)
{
    __mtc0(value,COP_InterruptMode);
}
//..............................................................................

//..............................................................................
unsigned int GetInterruptMode(void)
{
    return __mfc0(COP_InterruptMode);
}
//..............................................................................

//..............................................................................
void EnableInterrupts(void)
{
    SetStatusRegister(GetStatusRegister() | Status_InterruptEnable);
}
//..............................................................................

//..............................................................................
void DisableInterrupts(void)
{
    SetStatusRegister(GetStatusRegister() & (~Status_InterruptEnable));
}
//..............................................................................

//..............................................................................
void EnableIntervalTimer(void)
{
    SetStatusRegister(GetStatusRegister() | Status_IntervalTimerEnable);
}
//..............................................................................

//..............................................................................
void DisableIntervalTimer(void)
{
    SetStatusRegister(GetStatusRegister() & (~Status_IntervalTimerEnable));
}
//..............................................................................

