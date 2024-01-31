@class NSMutableArray;

@interface WBSPermissionDialogThrottler : NSObject {
    long long _denyCount;
    NSMutableArray *_requestedPresentations;
    BOOL _isShowingDialog;
    BOOL _invalidated;
    BOOL _callingPresentationHandler;
}

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)didCompletePermissionDialog:(BOOL)a0;
- (void)requestPermissionDialogPresentation:(id /* block */)a0;
- (void)willPerformUserInitiatedNavigation;
- (void)_callNextPresentationHandlerIfNeeded;
- (BOOL)_canShowPermissionDialog;

@end
