@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {
    NSMutableArray *_availableControllers;
}

- (id)init;
- (void)dealloc;
- (id)blockingViewControllerForBundleIdentifier:(id)a0 screenTimePolicy:(long long)a1;
- (void)_receivedMemoryWarning:(id)a0;
- (void)recycleBlockingViewController:(id)a0;
- (void).cxx_destruct;

@end
