@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)toggleAssertion;
- (void)_assertPowerAssertion;
- (void)releaseUIBusy;
- (void)releaseBusy;
- (void)_recomputePowerAssertion;
- (void)_deassertPowerAssertion;
- (void)retainUIBusy;
- (void)retainBusy;

@end
