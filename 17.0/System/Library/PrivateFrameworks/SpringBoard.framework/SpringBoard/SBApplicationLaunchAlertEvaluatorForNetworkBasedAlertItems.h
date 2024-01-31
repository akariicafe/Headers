@class NSString, SBAirplaneModeController, SBTelephonyManager;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator> {
    SBAirplaneModeController *_airplaneModeController;
    SBTelephonyManager *_telephonyManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_telephonyManager;
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)a0;
- (id)initWithAirplaneModeController:(id)a0 telephonyManager:(id)a1;
- (void).cxx_destruct;
- (id)_airplaneModeController;

@end
