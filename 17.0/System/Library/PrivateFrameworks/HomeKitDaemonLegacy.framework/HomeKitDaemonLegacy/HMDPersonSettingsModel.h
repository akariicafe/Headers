@class NSUUID, NSData, NSDictionary;

@interface HMDPersonSettingsModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;
@property (class, readonly, copy) NSUUID *sentinelModelUUID;

@property (retain) NSData *classificationNotificationSettingsData;
@property (readonly, copy) NSDictionary *faceClassificationNotificationsEnabledByPersonUUID;

+ (id)hmbProperties;
+ (BOOL)hmbExcludeFromCloudStorage;

- (id)init;
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)a0;
- (id)classificationNotificationsEnabledForPersonUUID:(id)a0;
- (void)setClassificationNotificationsEnabled:(id)a0 forPersonUUID:(id)a1;
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;

@end
