@interface MLCConvolutionDescriptor : NSObject <NSCopying>

@property (nonatomic) int paddingPolicy;
@property (nonatomic) unsigned long long paddingSizeInX;
@property (nonatomic) unsigned long long paddingSizeInY;
@property (readonly, nonatomic) int convolutionType;
@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long inputFeatureChannelCount;
@property (readonly, nonatomic) unsigned long long outputFeatureChannelCount;
@property (readonly, nonatomic) unsigned long long strideInX;
@property (readonly, nonatomic) unsigned long long strideInY;
@property (readonly, nonatomic) unsigned long long dilationRateInX;
@property (readonly, nonatomic) unsigned long long dilationRateInY;
@property (readonly, nonatomic) unsigned long long groupCount;
@property (readonly, nonatomic) BOOL isConvolutionTranspose;
@property (readonly, nonatomic) BOOL usesDepthwiseConvolution;

+ (id)descriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 outputFeatureChannelCount:(unsigned long long)a2 groupCount:(unsigned long long)a3 strides:(id)a4 dilationRates:(id)a5 paddingPolicy:(int)a6 paddingSizes:(id)a7;
+ (id)descriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannelCount:(unsigned long long)a2 outputFeatureChannelCount:(unsigned long long)a3;
+ (id)convolutionTransposeDescriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 outputFeatureChannelCount:(unsigned long long)a2 groupCount:(unsigned long long)a3 strides:(id)a4 dilationRates:(id)a5 paddingPolicy:(int)a6 paddingSizes:(id)a7;
+ (id)convolutionTransposeDescriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 outputFeatureChannelCount:(unsigned long long)a2 strides:(id)a3 paddingPolicy:(int)a4 paddingSizes:(id)a5;
+ (id)convolutionTransposeDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannelCount:(unsigned long long)a2 outputFeatureChannelCount:(unsigned long long)a3;
+ (id)depthwiseConvolutionDescriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 channelMultiplier:(unsigned long long)a2 strides:(id)a3 dilationRates:(id)a4 paddingPolicy:(int)a5 paddingSizes:(id)a6;
+ (id)depthwiseConvolutionDescriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 channelMultiplier:(unsigned long long)a2 strides:(id)a3 paddingPolicy:(int)a4 paddingSizes:(id)a5;
+ (id)depthwiseConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannelCount:(unsigned long long)a2 channelMultiplier:(unsigned long long)a3;
+ (id)descriptorWithKernelSizes:(id)a0 inputFeatureChannelCount:(unsigned long long)a1 outputFeatureChannelCount:(unsigned long long)a2 strides:(id)a3 paddingPolicy:(int)a4 paddingSizes:(id)a5;
+ (id)descriptorWithType:(int)a0 kernelSizes:(id)a1 inputFeatureChannelCount:(unsigned long long)a2 outputFeatureChannelCount:(unsigned long long)a3 groupCount:(unsigned long long)a4 strides:(id)a5 dilationRates:(id)a6 paddingPolicy:(int)a7 paddingSizes:(id)a8;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(int)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 inputFeatureChannelCount:(unsigned long long)a3 outputFeatureChannelCount:(unsigned long long)a4 groupCount:(unsigned long long)a5 strideInX:(unsigned long long)a6 strideInY:(unsigned long long)a7 dilationRateInX:(unsigned long long)a8 dilationRateInY:(unsigned long long)a9 paddingPolicy:(int)a10 paddingSizeInX:(unsigned long long)a11 paddingSizeInY:(unsigned long long)a12;

@end
