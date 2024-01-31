@class NSString, SBNotificationHomeAffordanceController, UIPanGestureRecognizer, BSAnimationSettings;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling> {
    SBNotificationHomeAffordanceController *_notificationHomeAffordanceController;
}

@property (readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)keyboardAssertionForGestureWindow:(id)a0;
- (void)registerHomeGestureParticipant:(id)a0 withIdentifier:(long long)a1;
- (void)unregisterHomeGestureParticipant:(id)a0 withIdentifier:(long long)a1;

@end
