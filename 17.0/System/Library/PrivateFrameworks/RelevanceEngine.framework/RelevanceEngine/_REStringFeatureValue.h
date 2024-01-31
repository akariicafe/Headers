@class NSString;

@interface _REStringFeatureValue : REFeatureValue {
    NSString *_value;
}

+ (id)featureValueWithString:(id)a0;

- (id)stringValue;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_integralFeatureValue;

@end
