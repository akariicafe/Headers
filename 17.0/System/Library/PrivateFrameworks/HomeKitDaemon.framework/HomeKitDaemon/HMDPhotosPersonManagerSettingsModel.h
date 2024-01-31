@class NSUUID, NSNumber;

@interface HMDPhotosPersonManagerSettingsModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;

@property (retain) NSNumber *sharingFaceClassificationsEnabled;
@property (retain) NSUUID *zoneUUID;

+ (id)hmbProperties;

- (id)createSettings;
- (id)initWithModelID:(id)a0 settings:(id)a1;

@end
