@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (void)disableSleep;
+ (id)powerAssertionStatus;
+ (void)enableSleep;
+ (void)_retainAssertion;
+ (void)_doProtected:(id /* block */)a0;

@end
