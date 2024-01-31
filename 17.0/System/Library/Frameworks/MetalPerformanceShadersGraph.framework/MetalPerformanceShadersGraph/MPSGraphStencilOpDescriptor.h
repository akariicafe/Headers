@class NSArray;

@interface MPSGraphStencilOpDescriptor : MPSGraphObject <NSCopying>

@property (nonatomic) unsigned long long reductionMode;
@property (copy, nonatomic) NSArray *offsets;
@property (copy, nonatomic) NSArray *strides;
@property (copy, nonatomic) NSArray *dilationRates;
@property (copy, nonatomic) NSArray *explicitPadding;
@property (nonatomic) long long boundaryMode;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) float paddingConstant;

+ (id)descriptorWithExplicitPadding:(id)a0;
+ (id)descriptorWithOffsets:(id)a0 explicitPadding:(id)a1;
+ (id)descriptorWithPaddingStyle:(unsigned long long)a0;
+ (id)descriptorWithReductionMode:(unsigned long long)a0 offsets:(id)a1 strides:(id)a2 dilationRates:(id)a3 explicitPadding:(id)a4 boundaryMode:(long long)a5 paddingStyle:(unsigned long long)a6 paddingConstant:(float)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
