@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (long long)_categoryValueForValue:(long long)a0;
- (BOOL)_acceptsValue:(long long)a0;
- (id)_predicateForSDKVersion:(unsigned int)a0;
- (long long)_defaultValue;

@end
