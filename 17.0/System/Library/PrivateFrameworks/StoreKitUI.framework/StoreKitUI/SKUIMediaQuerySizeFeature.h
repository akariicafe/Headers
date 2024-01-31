@interface SKUIMediaQuerySizeFeature : SKUIMediaQueryFeature {
    double _value;
}

+ (BOOL)supportsFeatureName:(id)a0;

- (id)description;
- (id)requiredKeys;
- (BOOL)evaluateWithValues:(id)a0;
- (id)initWithFeatureName:(id)a0 value:(id)a1;

@end
