@class NSArray;

@interface MPSGraphPooling4DOpDescriptor : MPSGraphObject <NSCopying>

@property (copy, nonatomic) NSArray *kernelSizes;
@property (copy, nonatomic) NSArray *strides;
@property (copy, nonatomic) NSArray *dilationRates;
@property (copy, nonatomic) NSArray *paddingValues;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) BOOL ceilMode;
@property (nonatomic) BOOL includeZeroPadToAverage;
@property (nonatomic) unsigned long long returnIndicesMode;
@property (nonatomic) unsigned int returnIndicesDataType;

+ (id)descriptorWithKernelSizes:(id)a0 paddingStyle:(unsigned long long)a1;
+ (id)descriptorWithKernelSizes:(id)a0 strides:(id)a1 dilationRates:(id)a2 paddingValues:(id)a3 paddingStyle:(unsigned long long)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
