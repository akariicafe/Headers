@class NSUUID, SBAppLayout;

@interface SBRequestSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) NSUUID *invalidationIdentifier;
@property (readonly, nonatomic) BOOL wantsGlobalSuppression;
@property (readonly, nonatomic) BOOL wantsKeyLineEnabled;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithAppLayout:(id)a0 wantsGlobalSuppression:(BOOL)a1 wantsKeyLineEnabled:(BOOL)a2 invalidationIdentifier:(id)a3;

@end
