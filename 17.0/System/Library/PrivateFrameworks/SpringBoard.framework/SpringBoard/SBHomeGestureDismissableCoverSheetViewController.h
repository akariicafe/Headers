@class SBFZStackParticipant, NSString, SBHomeGesturePanGestureRecognizer;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate>

@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer;
@property (nonatomic) BOOL wantsHomeGestureOwnership;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly, nonatomic) long long zStackParticipantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_relinquishHomeGestureOwnership;
- (void)_handleBottomEdgeGestureChanged:(id)a0;
- (void)_requestHomeGestureOwnership;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleBottomEdgeGestureBegan:(id)a0;
- (void)_handleBottomEdgeGestureEnded:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleBottomEdgeGesture:(id)a0;
- (BOOL)shouldDismissForHomeGestureRecognizer:(id)a0;

@end
