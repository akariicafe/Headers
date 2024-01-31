@interface MPSImageSpatioTemporalGuidedFilterDescriptor : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long kernelSpatialDiameter;
@property (nonatomic) unsigned long long kernelTemporalDiameter;
@property (nonatomic) float epsilon;
@property (nonatomic) unsigned long long guideChannels;
@property (nonatomic) unsigned long long sourceChannels;
@property (nonatomic) BOOL preallocateIntermediates;
@property (nonatomic) BOOL useHighPrecisionIntermediates;

+ (id)filterDescriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 arrayLength:(unsigned long long)a2 kernelSpatialDiameter:(unsigned long long)a3 kernelTemporalDiameter:(unsigned long long)a4 epsilon:(float)a5 sourceChannels:(unsigned long long)a6 guideChannels:(unsigned long long)a7;
+ (id)filterDescriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 arrayLength:(unsigned long long)a2 kernelSpatialDiameter:(unsigned long long)a3 kernelTemporalDiameter:(unsigned long long)a4 epsilon:(float)a5 sourceChannels:(unsigned long long)a6 guideChannels:(unsigned long long)a7 preallocateIntermediates:(BOOL)a8;

- (id)init;

@end
