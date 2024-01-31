@class NSHashTable;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject {
    NSHashTable *_deferralAssertions;
    BOOL _deviceOrientationIsDirty;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) BOOL currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)a0;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_legacy_enqueueOrientationUpdateToDeviceOrientation:(long long)a0 source:(id)a1;
- (id)description;
- (BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)a0;

@end
