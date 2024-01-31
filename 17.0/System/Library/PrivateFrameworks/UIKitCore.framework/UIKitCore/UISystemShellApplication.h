@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;

- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithSettings:(id)a1 fromOrientation:(long long)a2;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)a0;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (BOOL)_openURL:(id)a0;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (BOOL)isSuspendedEventsOnly;
- (void)resetIdleTimerAndUndim;
- (BOOL)isFrontBoard;
- (BOOL)handleStatusBarHoverActionForRegion:(long long)a0;
- (long long)startupInterfaceOrientation;
- (BOOL)isSuspendedUnderLock;
- (BOOL)_saveSnapshotWithName:(id)a0;
- (id)init;
- (BOOL)canOpenURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSuspended;

@end
