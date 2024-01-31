@class NSString;

@interface HMDLegacyCloudZoneConfiguration : HMBCloudZoneConfiguration <NSMutableCopying>

@property (copy) NSString *rootRecordName;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
