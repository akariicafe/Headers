@class NSString;

@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSString *reason;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 validator:(id /* block */)a1 reason:(id)a2;
- (long long)type;

@end
