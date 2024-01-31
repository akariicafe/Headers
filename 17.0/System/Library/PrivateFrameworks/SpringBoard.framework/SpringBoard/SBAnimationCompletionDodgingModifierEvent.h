@class NSString;

@interface SBAnimationCompletionDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) BOOL retargeted;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithIdentifier:(id)a0 finished:(BOOL)a1 retargeted:(BOOL)a2;

@end
