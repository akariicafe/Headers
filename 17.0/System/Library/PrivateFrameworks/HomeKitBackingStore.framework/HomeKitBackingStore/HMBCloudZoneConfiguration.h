@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSkipCloudPulls;

- (unsigned long long)hash;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
