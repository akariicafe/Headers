@interface REFrequencyFeatureTransformer : REFeatureTransformer

+ (id)frequencyTransformWithCount:(unsigned long long)a0 minimumValidCount:(long long)a1;
+ (id)frequencyTransformWithCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)increaseCountForFeatureValue:(id)a0;

@end
