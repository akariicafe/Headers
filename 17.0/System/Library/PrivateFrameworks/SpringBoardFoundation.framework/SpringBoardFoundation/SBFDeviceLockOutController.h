@class SBFUserAuthenticationController, NSString;
@protocol SBFLiquidDetectionBlockProvider, SBFThermalBlockProvider;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLiquidDetectionObserver, SBFLockOutStatusProvider> {
    unsigned long long _lastBlockedStatus;
}

@property (retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController;
@property (retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) id<SBFThermalBlockProvider> thermalProvider;
@property (nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) BOOL lockedOutCached;
@property (retain, nonatomic) id<SBFLiquidDetectionBlockProvider> liquidDetectionBlockProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isLiquidDetectionCriticalUIBlocked;
- (id)succinctDescriptionBuilder;
- (id)initWithThermalController:(id)a0 authenticationController:(id)a1;
- (BOOL)isTemporarilyBlocked;
- (unsigned long long)deviceBlockStatus;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isBlocked;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (void).cxx_destruct;
- (void)temporaryBlockStatusChanged;
- (BOOL)isThermallyBlocked;
- (BOOL)isUserRequestedEraseEnabled;
- (void)liquidDetectionBlockStatusChanged:(id)a0;
- (id)succinctDescription;
- (BOOL)isPermanentlyBlocked;
- (BOOL)isLockedOut;
- (void)thermalBlockStatusChanged:(id)a0;
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)a0;

@end
