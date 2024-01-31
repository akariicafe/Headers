@interface MPSNDArrayCostVolumeDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned int samplingMode;
@property (nonatomic) unsigned int nearestMode;
@property (nonatomic) unsigned int dataFormat;
@property (nonatomic) int paddingMode;
@property (nonatomic) BOOL normalizeCoordinates;
@property (nonatomic) BOOL relativeCoordinates;
@property (nonatomic) BOOL alignCorners;
@property (nonatomic) BOOL coordinate1DInWidth;
@property (nonatomic) double constantValue;
@property (nonatomic) struct MPSNDArrayCostVolumeWindowSizes { unsigned long long size[2]; } windowSizes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
