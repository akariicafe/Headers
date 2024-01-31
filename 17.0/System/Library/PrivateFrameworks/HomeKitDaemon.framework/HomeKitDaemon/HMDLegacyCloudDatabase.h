@class NSString;

@interface HMDLegacyCloudDatabase : HMBCloudDatabase <HMBCloudZoneDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordZoneIDForLegacyName:(id)a0;
+ (id)legacyCloudDatabaseWithLocalDatabase:(id)a0;

- (id)mirrorLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithLocalDatabase:(id)a0;
- (id)createLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;

@end
