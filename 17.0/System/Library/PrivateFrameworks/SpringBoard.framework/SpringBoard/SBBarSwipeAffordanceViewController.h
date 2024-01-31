@class SBFZStackParticipant, NSString, SBBarSwipeAffordanceController, SBBarSwipeAffordanceView;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceControllingDelegate;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling> {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
}

@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (weak, nonatomic) id<SBBarSwipeAffordanceControllingDelegate> delegate;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (nonatomic) BOOL suppressAffordance;
@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (id)initWithZStackParticipantIdentifier:(long long)a0 windowScene:(id)a1;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
