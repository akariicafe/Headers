@interface PLPowerAssertion : NSObject

+ (void)performNoTimeoutPowerAssertionTaskWithName:(id)a0 humanReadableReason:(id)a1 block:(id /* block */)a2;
+ (void)performPowerAssertionTaskWithName:(id)a0 humanReadableReason:(id)a1 timeout:(double)a2 timeoutAction:(struct __CFString { } *)a3 block:(id /* block */)a4;
+ (void)removePowerAssertionForAssertionID:(unsigned int)a0;
+ (unsigned int)takePowerAssertionWithName:(id)a0 humanReadableReason:(id)a1 timeout:(double)a2 timeoutAction:(struct __CFString { } *)a3;

@end
