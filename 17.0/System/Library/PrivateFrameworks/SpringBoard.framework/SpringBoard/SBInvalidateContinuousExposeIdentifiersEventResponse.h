@class SBAppLayout;

@interface SBInvalidateContinuousExposeIdentifiersEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout;
@property (readonly, nonatomic) BOOL animated;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithTransitioningFromAppLayout:(id)a0 transitioningToAppLayout:(id)a1 animated:(BOOL)a2;

@end
