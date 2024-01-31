@class NSString;
@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>

@property (nonatomic) BOOL cachedCarPlayAllowed;
@property (weak, nonatomic) id<CRCarPlayPreferencesDelegate> preferencesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_boolValueInCarPlayDomainForKey:(struct __CFString { } *)a0;
- (BOOL)isCarPlayAllowed;
- (id)isCCCHeadUnitPairingOverrideEnabled;
- (BOOL)isWirelessCarPlayEnabled;
- (BOOL)_isCarPlayAllowed;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (BOOL)isCarPlayCapable;
- (id)isCarPlaySetupEnabled;
- (id)shouldAlwaysAcceptCCCHeadUnitPairing;
- (void)_updateCarPlayAllowed;

@end
