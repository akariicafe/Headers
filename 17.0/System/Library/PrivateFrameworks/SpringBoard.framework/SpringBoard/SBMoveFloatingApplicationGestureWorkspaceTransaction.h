@class SBApplicationSceneUpdateTransaction;

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _tryPreemptiveFloatingApplicationActivation;
    BOOL _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFloatingApplicationFrame;
}

- (void)_didComplete;
- (void)_begin;
- (void).cxx_destruct;
- (long long)_gestureType;
- (void)_beginWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;
- (void)_performBlockWithLiveContentOverlayUpdatesSuspended:(id /* block */)a0;
- (void)_startSuppressingKeyboardForFloatingApplication;
- (void)_stopSuppressingKeyboard;
- (id)_transitionRequestForPreemptiveFloatingApplicationActivation;
- (void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)a0;
- (void)_updateWithGesture:(id)a0;

@end
