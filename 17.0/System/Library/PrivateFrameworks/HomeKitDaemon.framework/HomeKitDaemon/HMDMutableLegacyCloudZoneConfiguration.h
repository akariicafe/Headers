@class NSString;

@interface HMDMutableLegacyCloudZoneConfiguration : HMDLegacyCloudZoneConfiguration <NSMutableCopying>

@property (copy) NSString *rootRecordName;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
