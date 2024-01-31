@class NSString, SBWindowScene, SBFZStackParticipant;

@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe>

@property (retain, nonatomic) SBFZStackParticipant *participant;
@property (nonatomic) BOOL wantsHomeGesture;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)handleVolumeDecrease;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (id)title;
- (void)windowSceneDidUpdate:(id)a0;

@end
