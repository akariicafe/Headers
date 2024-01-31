@class NSString;

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>

@property (readonly, nonatomic) unsigned long long buttonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hardwareButtonInteractionForHomeButton;
+ (id)hardwareButtonInteractionForLockButton;

- (void)dealloc;
- (id)hardwareButtonGestureParameters;
- (id)initWithButtonType:(unsigned long long)a0;
- (void)_registerAsNotificationObserver;
- (void)_accessibilityPrefsDidChange;
- (double)_downToDownInterval;
- (BOOL)_presentMigrationAlertIfNeeded;
- (struct __CFString { } *)_speedChangedNotificationName;
- (BOOL)_supportsTripleClick;
- (void)_unregisterAsNotificationObserver;
- (BOOL)consumeTriplePressUp;

@end
