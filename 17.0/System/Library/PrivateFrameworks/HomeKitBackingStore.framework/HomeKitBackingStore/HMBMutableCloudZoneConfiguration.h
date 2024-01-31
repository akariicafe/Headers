@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSkipCloudPulls;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
