@interface FHCategorySpendInsight : FHFeatureInsight

@property (nonatomic) long long merchantCategory;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
