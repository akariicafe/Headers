@interface PRPosterHomePosterHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, nonatomic, getter=isLegibilityBlurEnabled) BOOL legibilityBlurEnabled;
@property (readonly, nonatomic) BOOL allowsModifyingLegibilityBlur;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithLegibilityBlurEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLegibilityBlurEnabled:(BOOL)a0 allowsModifyingLegibilityBlur:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)copyByTogglingLegibilityBlurEnabled;

@end
