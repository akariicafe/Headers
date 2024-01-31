@class SBSwitcherModifier;
@protocol SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier

@property (weak, nonatomic) id<SBHistorianSwitcherModifierDelegate> historianDelegate;
@property (readonly, nonatomic) SBSwitcherModifier *rootModifier;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)handleEvent:(id)a0;
- (id)initWithRootModifier:(id)a0;

@end
