@class NSUUID;

@interface SBRelinquishSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUUID *invalidationIdentifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithInvalidationIdentifier:(id)a0;

@end
