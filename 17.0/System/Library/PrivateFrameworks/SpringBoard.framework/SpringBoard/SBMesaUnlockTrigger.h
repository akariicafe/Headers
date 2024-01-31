@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;

- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)screenOn;
- (id)succinctDescription;
- (void)fingerOn;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)significantUserInteractionOccurred;

@end
