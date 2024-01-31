@class SBFZStackParticipant, NSString, SBWindowScene, SBBarSwipeAffordanceView;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceControllingDelegate;

@interface SBBarSwipeAffordanceController : NSObject <SBBarSwipeAffordanceControlling> {
    long long _zStackParticipantIdentifier;
}

@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (weak, nonatomic) id<SBBarSwipeAffordanceControllingDelegate> delegate;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (nonatomic) BOOL suppressAffordance;
@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (id)initWithZStackParticipantIdentifier:(long long)a0 windowScene:(id)a1;
- (void)dealloc;
- (void)_keyboardDidShow:(id)a0;
- (void)_beginTryingToBecomeActiveAffordance;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)_setKeyboardHomeAffordanceVisible:(BOOL)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)_stopTryingToBecomeActiveAffordance;
- (void).cxx_destruct;
- (void)_updateActiveState;

@end
