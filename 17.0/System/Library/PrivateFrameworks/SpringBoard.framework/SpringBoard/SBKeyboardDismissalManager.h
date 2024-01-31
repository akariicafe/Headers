@class BKSTouchDeliveryObservationService, NSString, SBWorkspaceKeyboardFocusController, SBSystemGestureManager, BSAbsoluteMachTimer, __UIKeyboardArbiterManager, BSCompoundAssertion, UIGestureRecognizer;

@interface SBKeyboardDismissalManager : NSObject <SBFailureNotifyingTapGestureRecognizerDelegate, BKSTouchDeliveryObserving> {
    __UIKeyboardArbiterManager *_keyboardArbiterManager;
    SBSystemGestureManager *_systemGestureManager;
    SBWorkspaceKeyboardFocusController *_focusController;
    BKSTouchDeliveryObservationService *_touchService;
    BSCompoundAssertion *_participantsAssertion;
    UIGestureRecognizer *_dismissGestureRecognizer;
    unsigned int _trackedTouchIdentifier;
    BSAbsoluteMachTimer *_touchExpiryTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didTap:(id)a0;
- (void)dealloc;
- (void)_reset;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)gestureRecognizerTransitionedToFailed:(id)a0;
- (id)initWithTouchDeliveryService:(id)a0 systemGestureManager:(id)a1 keyboardArbiterManager:(id)a2 focusController:(id)a3;
- (void)touchUpOccuredForIdentifier:(unsigned int)a0 detached:(BOOL)a1 context:(unsigned int)a2 pid:(int)a3;
- (BOOL)_shouldPreventDismissalForTouch:(id)a0;
- (void).cxx_destruct;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (id)registerKeyboardDismissalParticipant:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
