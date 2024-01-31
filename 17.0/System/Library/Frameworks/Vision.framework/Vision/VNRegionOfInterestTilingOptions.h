@interface VNRegionOfInterestTilingOptions : NSObject <NSCopying>

@property double tileOverlapPercentage;
@property double regionOfInterestAspectRatioThreshold;
@property long long tileOverflowCount;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
