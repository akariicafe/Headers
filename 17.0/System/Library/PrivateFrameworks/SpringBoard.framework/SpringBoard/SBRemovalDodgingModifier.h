@class NSString, NSUUID;

@interface SBRemovalDodgingModifier : SBDodgingModifier

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUUID *completionIdentifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)handleRemovalEvent:(id)a0;
- (id)handleAnimationCompletionEvent:(id)a0;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)modelForInvalidatedModel:(id)a0;

@end
