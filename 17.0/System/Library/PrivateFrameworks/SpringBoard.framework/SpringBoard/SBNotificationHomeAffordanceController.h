@class NSString, NSMapTable, SBScreenEdgePanGestureRecognizer, SBHomeGesturePanGestureRecognizer, BSAnimationSettings;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBNotificationHomeAffordanceController : NSObject <SBFZStackParticipantDelegate> {
    NSMapTable *_clientsToZStackParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}

@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)zStackParticipantDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void).cxx_destruct;
- (void)registerClient:(id)a0 withZStackIdentifier:(long long)a1;
- (void)unregisterClient:(id)a0 withZStackIdentifier:(long long)a1;

@end
