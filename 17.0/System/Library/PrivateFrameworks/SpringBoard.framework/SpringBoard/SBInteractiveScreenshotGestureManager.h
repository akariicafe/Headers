@class NSMutableDictionary, SBInteractiveScreenshotCommitWorkspaceTransaction, SBSystemGestureManager, SBMainWorkspace, SBInteractiveScreenshotSettings, UIScreen, NSMutableArray, NSString, SBCornerFingerPanGestureRecognizer, SBAsynchronousRenderingAssertion, NSHashTable, NSMutableSet, SBCornerPencilPanGestureRecognizer, SBDisplayAppInteractionEventSource, SBWindowScene, NSUUID;
@protocol SBInteractiveScreenshotGestureManagerDelegate, BSInvalidatable;

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate> {
    NSUUID *_activeGestureSessionID;
    SBDisplayAppInteractionEventSource *_appInteractionEventSource;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBCornerPencilPanGestureRecognizer *_bottomLeftPencilGestureRecognizer;
    SBCornerFingerPanGestureRecognizer *_bottomLeftFingerGestureRecognizer;
    SBCornerPencilPanGestureRecognizer *_bottomRightPencilGestureRecognizer;
    SBCornerFingerPanGestureRecognizer *_bottomRightFingerGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;
    id<BSInvalidatable> _commitTransactionDisableGestureAssertion;
    NSMutableSet *_disableGestureAssertions;
    BOOL _hasInitiatedCommit;
    BOOL _isCapturingScreenshot;
    double _lastApplicationTouchTime;
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;
    UIScreen *_screen;
    NSMutableDictionary *_sessionIDToSession;
    SBInteractiveScreenshotSettings *_settings;
    SBSystemGestureManager *_systemGestureManager;
    NSHashTable *_weakReusableGestureRootWindows;
    SBMainWorkspace *_workspace;
    SBWindowScene *_windowScene;
}

@property (weak, nonatomic) id<SBInteractiveScreenshotGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)transactionDidComplete:(id)a0;
- (void).cxx_destruct;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_invalidateSessionID:(id)a0;
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)a0;
- (unsigned long long)_touchTypeForGestureRecognizer:(id)a0;
- (void)_handleInteractiveScreenshotGesture:(id)a0;
- (void)_performCommitWorkspaceTransactionBlock:(id /* block */)a0;
- (id)_screenshotPresentationOptions;
- (void)_springBoardBootCompleted:(id)a0;
- (void)_updateFailureRequirements;
- (id)acquireDisableGestureAssertionWithReason:(id)a0;
- (BOOL)handleRemoteTransientOverlayPresentationRequest:(id)a0 forSession:(id)a1;
- (id)initWithWindowScene:(id)a0 workspace:(id)a1 appInteractionEventSource:(id)a2;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)a0;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)a0;
- (void)interactiveScreenshotGestureRootViewController:(id)a0 gestureDidCompleteWithIntent:(long long)a1;
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)a0;

@end
