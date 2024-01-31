@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)a0 andInitialLockState:(BOOL)a1;
- (void)_updateLockStateWithChanges:(id /* block */)a0;
- (void)_updateLockStateWithOrientation:(long long)a0 forceUpdateHID:(BOOL)a1 changes:(id /* block */)a2;
- (id)succinctDescriptionBuilder;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (void)setLockOverrideEnabled:(BOOL)a0 forReason:(id)a1;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (void)lock;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isUserLocked;
- (void)_beginShimmingForReason:(id)a0;
- (void)unlock;
- (void)enableLockOverrideForReason:(id)a0 suggestOrientation:(long long)a1;
- (void)enableLockOverrideForReason:(id)a0 forceOrientation:(long long)a1;
- (id)description;
- (void)_removeLockOverrideReason:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_endShimmingForReason:(id)a0;
- (void)restoreStateFromPrefs;
- (BOOL)lockOverrideEnabled;
- (id)succinctDescription;
- (void)lock:(long long)a0;
- (BOOL)isEffectivelyLocked;
- (long long)userLockOrientation;
- (void)_handler_runLoopObserverDispose;
- (long long)effectiveLockedOrientation;
- (void)_addLockOverrideReason:(id)a0 orientation:(long long)a1 force:(BOOL)a2;

@end
