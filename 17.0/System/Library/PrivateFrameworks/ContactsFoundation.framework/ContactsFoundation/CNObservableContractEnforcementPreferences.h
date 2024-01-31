@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;

@end
