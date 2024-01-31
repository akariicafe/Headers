@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_notifyObserversReachabilityModeActive:(BOOL)a0;
- (void)_setKeepAliveTimer;
- (void)_axAddReachabilityProperty:(id)a0 toDictionary:(id)a1;
- (id)_axDictionaryOfAnimationProperties;
- (BOOL)_axReachabilityEnabled;
- (id)_axReachabilitySettings;
- (void)_axSendReachabilityToggledActionWithPayload:(id)a0;

@end
