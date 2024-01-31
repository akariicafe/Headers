@interface VKAssert : NSObject

+ (void)handleFailedAssertWithCondition:(const char *)a0 functionName:(const char *)a1 simulateCrash:(BOOL)a2 showAlert:(BOOL)a3 format:(id)a4;
+ (void)handleFailedAssertWithCondition:(const char *)a0 functionName:(const char *)a1 simulateCrash:(BOOL)a2 showAlert:(BOOL)a3 alertMessage:(id)a4 format:(id)a5;

@end
