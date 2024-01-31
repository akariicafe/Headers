@class _UIViewServiceSessionActivityRecord, NSUUID, NSString, _UIAsyncInvocation, NSArray, _UITouchesBeganObserverGestureRecognizer, _UIHostedWindow;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceSessionActivityProviding, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {
    id _remoteViewControllerProxy;
    NSUUID *_sessionIdentifier;
    BOOL _wasInvalidated;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    _UIHostedWindow *_hostedWindow;
    struct CGPoint { double x; double y; } _windowOrigin;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _safeAreaInsets;
    struct CGSize { double width; double height; } _hostedViewSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hostedViewReference;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
    _UIViewServiceSessionActivityRecord *_sessionActivityRecord;
    _UITouchesBeganObserverGestureRecognizer *_hostedTEWActivityObserverGesture;
    _UITouchesBeganObserverGestureRecognizer *_hostedRemoteKeyboardWindowActivityObserverGesture;
}

@property (readonly, nonatomic) unsigned long long _providerType;
@property (readonly, nonatomic) NSUUID *_sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)XPCInterface;
+ (BOOL)_shouldAddServiceOperator;
+ (id)operatorWithRemoteViewControllerProxy:(id)a0 hostPID:(int)a1 sessionIdentifier:(id)a2;

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)_queue;
- (void)dealloc;
- (id)invalidate;
- (void).cxx_destruct;
- (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)_objc_initiateDealloc;
- (void)__setRemoteTextEffectsWindowMatchesLayerWithContextId:(unsigned int)a0 renderId:(unsigned long long)a1;
- (void)_invalidateUnconditionallyThen:(id /* block */)a0;
- (void)_windowDidBecomeApplicationKey:(id)a0;
- (void)forceSyncToStatusBarOrientation;
- (void)__createHostedTextEffectsWithReplyHandler:(id /* block */)a0;
- (void)__hostDidEnterBackground;
- (void)__hostDidReceiveGestureDirection:(long long)a0 authenticationMessage:(id)a1;
- (void)__hostViewDidMoveToScreenWithNewHostingHandleReplyHandler:(id /* block */)a0;
- (void)__hostViewWillAppear:(BOOL)a0;
- (void)__hostViewWillDisappear:(BOOL)a0;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)a0;
- (void)__setHostAllowedNotifications:(id)a0;
- (void)__setHostedViewReference:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__setHostedViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)__setNextAutomaticOrderOutDirection:(int)a0 duration:(double)a1;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)__setWindowOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleRemoteKeyboardActivityObserverGesture:(id)a0;
- (void)_handleTEWActivityObserverGesture:(id)a0;
- (void)_inputResponderReloaded:(id)a0;
- (void)_installActivityObserverGestureIfNeeded;
- (void)_installActivityObserverGesturesInKeyboardWindowIfNeeded;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)a0;
- (void)_reloadSafeInsets;
- (void)_removeTextEffectsWindowMatchAnimations;
- (void)_resetHostedViewSize;
- (void)_restoreInputViews;
- (void)_screenInterfaceOrientationDidChange:(id)a0;
- (void)_uninstallActivityObserverGestureIfNeeded;
- (void)_uninstallActivityObserverGesturesFromKeyboardWindowIfNeeded;
- (void)_viewServiceHostWillEnterForeground:(id)a0;
- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (void)hostedWindow:(id)a0 didSetFirstResponder:(id)a1;
- (void)makeHostWindowKey;
- (void)performOnRelevantWindows:(id /* block */)a0;
- (void)setHostedWindow:(id)a0 disableAutomaticBehaviors:(BOOL)a1;

@end
