@class UINotificationFeedbackGenerator, UIView;
@protocol SBFBarSwipeBehaviorDelegate, UIViewSpringAnimationBehaviorDescribing;

@interface SBFBarSwipeBehavior : NSObject {
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    BOOL _didFireAction;
}

@property (readonly, nonatomic) UIView *grabberView;
@property (readonly, nonatomic) double grabberViewAdditionalEdgeSpacing;
@property (readonly, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> settleAffordanceAnimationBehaviorDescription;
@property (weak, nonatomic) id<SBFBarSwipeBehaviorDelegate> delegate;
@property (nonatomic) long long feedbackType;

- (void)_fireAction;
- (void)barSwipeInteractionChanged:(id)a0;
- (void)barSwipeInteractionEnded:(id)a0;
- (void)_offsetGrabberForProgress:(double)a0;
- (void)_settleGrabber;
- (void)barSwipeInteractionBegan:(id)a0;
- (void)barSwipeInteractionCancelled:(id)a0;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (void)_setGrabberAdditionalEdgeSpacing:(double)a0;
- (void)_createFeedbackGenerator;
- (void).cxx_destruct;
- (id)initWithGrabberView:(id)a0 settleAffordanceAnimationBehaviorDescription:(id)a1;
- (id)_grabberViewContainerView;
- (double)_progressWithTranslation:(struct CGPoint { double x0; double x1; })a0 liftoffVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
