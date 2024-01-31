@interface CIBurstClusterDivider : NSObject

@property float dividerScore;
@property int trueLocalMaximum;
@property int leftImage;
@property float actionAmount;
@property float noiseThreshold;
@property float highNoiseThreshold;

- (long long)compareIndices:(id)a0;
- (long long)compareActionAmounts:(id)a0;
- (long long)compareDividers:(id)a0;

@end
