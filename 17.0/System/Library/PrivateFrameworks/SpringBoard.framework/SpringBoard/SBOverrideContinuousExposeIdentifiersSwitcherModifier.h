@class NSArray;

@interface SBOverrideContinuousExposeIdentifiersSwitcherModifier : SBSwitcherModifier

@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInSwitcher;
@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInStrip;

- (void)didMoveToParentModifier:(id)a0;
- (id)continuousExposeIdentifiersInSwitcher;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)continuousExposeIdentifiersInStrip;
- (id)initWithContinuousExposeIdentifiersInSwitcher:(id)a0 continuousExposeIdentifiersInStrip:(id)a1;

@end
