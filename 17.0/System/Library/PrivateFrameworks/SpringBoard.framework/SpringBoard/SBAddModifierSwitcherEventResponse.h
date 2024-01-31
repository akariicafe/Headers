@class NSString, SBSwitcherModifier;

@interface SBAddModifierSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBSwitcherModifier *modifier;
@property (readonly, nonatomic) long long level;
@property (readonly, copy, nonatomic) NSString *key;

- (id)initWithModifier:(id)a0 level:(long long)a1;
- (void).cxx_destruct;
- (id)initWithModifier:(id)a0 level:(long long)a1 key:(id)a2;
- (long long)type;

@end
