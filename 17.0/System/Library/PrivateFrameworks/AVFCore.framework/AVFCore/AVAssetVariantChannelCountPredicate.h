@interface AVAssetVariantChannelCountPredicate : AVAssetVariantRenditionSpecificAttributePredicate

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithChannelCount:(long long)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
- (id)valueForAlternate:(id)a0;

@end
