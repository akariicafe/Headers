@class NSString;
@protocol SBUIBiometricResource;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver> {
    id<SBUIBiometricResource> _biometricResource;
    BOOL _fired;
    BOOL _didSuppressFire;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fire;
- (void)activate;
- (id)initWithBiometricResource:(id)a0;
- (void).cxx_destruct;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)deactivate;
- (void)biometricResource:(id)a0 matchingEnabledDidChange:(BOOL)a1;
- (void)_checkForLockout;

@end
