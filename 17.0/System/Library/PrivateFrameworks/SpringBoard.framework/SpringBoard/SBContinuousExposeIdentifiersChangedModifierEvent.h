@class NSArray, SBAppLayout;

@interface SBContinuousExposeIdentifiersChangedModifierEvent : SBSwitcherModifierEvent

@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInSwitcher;
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInStrip;
@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPreviousContinuousExposeIdentifiersInSwitcher:(id)a0 previousContinuousExposeIdentifiersInStrip:(id)a1 transitioningFromAppLayout:(id)a2 transitioningToAppLayout:(id)a3 animated:(BOOL)a4 gestureInitiated:(BOOL)a5;

@end
