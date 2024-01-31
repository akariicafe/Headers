@class NSString, NSCountedSet, EFObservable, NSObject;
@protocol OS_dispatch_queue, EFCancelable;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerQueue;
    int _pluggedIn;
    int _powerToken;
    int _batteryNotificationToken;
    NSCountedSet *_identifiers;
    id<EFCancelable> _appStateCancelable;
    BOOL _isForeground;
    struct IONotificationPort { } *_pmPort;
    unsigned int _pmNotifier;
}

@property (class, readonly, nonatomic) MFPowerController *sharedInstance;

@property (readonly, nonatomic) EFObservable *pluggedInObservable;
@property (readonly, nonatomic) EFObservable *lowPowerModeObservable;
@property (readonly, nonatomic) EFObservable *batteryLevelObservable;
@property (readonly, nonatomic) float batteryLevel;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly, getter=isBatterySaverModeEnabled) BOOL batterySaverModeEnabled;
@property (readonly, getter=isHoldingAssertion) BOOL holdingAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)powerlog:(id)a0 eventData:(id)a1;

- (id)init;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseAssertionWithIdentifier:(id)a0;
- (id)powerObservable;
- (double)_assertionTimeout;
- (void)_registerForBatteryLevelChanges;
- (void)_applicationForegroundStateChanged:(BOOL)a0;
- (void)_applicationForegroundStateChanged_nts:(BOOL)a0;
- (void)_batteryInformationChanged;
- (BOOL)_isHoldingTaskAssertion;
- (void)_lowPowerModeChangedNotification:(id)a0;
- (void)_releasePowerAssertion_nts;
- (void)_releaseTaskAssertion_nts;
- (void)_retainPowerAssertion_nts;
- (void)_retainTaskAssertion_nts;
- (void)_setPluggedIn:(unsigned int)a0;
- (void)_setupAssertionTimer:(double)a0;
- (void)_unregisterForBatteryLevelChanges;
- (id)batteryLevelStateChangeNotificationObservable;
- (void)retainAssertionWithIdentifier:(id)a0;
- (void)retainAssertionWithIdentifier:(id)a0 withAccount:(id)a1;
- (void)startListeningForBatterySaverNotifications;

@end
