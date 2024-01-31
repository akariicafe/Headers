@class NSArray;

@interface MPSNDArrayAffineQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (nonatomic) BOOL isAsymmetric;
@property (nonatomic) BOOL supportsMinValue;
@property (nonatomic) NSArray *zeroPoint;
@property (nonatomic) NSArray *scale;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(unsigned int)a0 isPerChannel:(BOOL)a1 isAsymmetric:(BOOL)a2 supportsMinValue:(BOOL)a3;
- (id)initWithDataType:(unsigned int)a0 zeroPoint:(id)a1 scale:(id)a2;

@end
