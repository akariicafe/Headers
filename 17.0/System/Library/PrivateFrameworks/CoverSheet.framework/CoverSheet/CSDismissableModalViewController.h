@class NSString, UIScreenEdgePanGestureRecognizer, SBFBarSwipeBehavior;
@protocol CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;

@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, UIGestureRecognizerDelegate, SBFBarSwipeBehaviorDelegate> {
    UIScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    SBFBarSwipeBehavior *_barSwipeBehavior;
}

@property (weak, nonatomic) id<CSDismissableModalViewControllerDelegate> delegate;
@property (retain, nonatomic) id<CSModalHomeAffordanceControlling> homeAffordanceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)barSwipeBehaviorActionPerformed:(id)a0;
- (void)_handleBottomEdgeGestureChanged:(id)a0;
- (void)_addOrRemoveGestureForCurrentSettings;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_configureBarSwipeBehaviorWithGrabberViewIfNecessary:(id)a0;
- (BOOL)presentationCancelsTouches;
- (void).cxx_destruct;
- (void)_handleBottomEdgeGestureBegan:(id)a0;
- (void)_handleBottomEdgeGestureEnded:(id)a0;
- (void)_handleBottomEdgeGestureRecognizer:(id)a0;
- (double)additionalEdgeSpacingForGrabberView:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void)addGrabberView:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(BOOL)a0;

@end
