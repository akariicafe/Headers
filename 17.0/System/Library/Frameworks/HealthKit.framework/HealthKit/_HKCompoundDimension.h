@class _HKFactorization;

@interface _HKCompoundDimension : _HKDimension {
    _HKFactorization *_baseDimensions;
}

+ (id)dimensionWithBaseDimensions:(id)a0;

- (id)_baseDimensions;
- (void).cxx_destruct;
- (id)_initWithBaseDimensions:(id)a0;

@end
