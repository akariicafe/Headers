@class NSUUID, SBAppLayout;

@interface SBInitiateSystemApertureBounceSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) NSUUID *suppressionIdentifierToInvalidate;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithAppLayout:(id)a0 suppressionIdentifierToInvalidate:(id)a1;

@end
