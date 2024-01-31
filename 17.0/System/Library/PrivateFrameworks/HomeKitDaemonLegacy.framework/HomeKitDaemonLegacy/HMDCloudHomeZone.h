@interface HMDCloudHomeZone : HMDCloudZone

@property (readonly, nonatomic, getter=isSharedHome) BOOL sharedHome;

+ (void)createHomeZoneWithName:(id)a0 owner:(id)a1 cacheZone:(id)a2 cloudCache:(id)a3 completion:(id /* block */)a4;
+ (id)zoneRootRecordName;
+ (id)zoneSharedRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;

- (void)setServerChangeToken:(id)a0;
- (id)description;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)a0;

@end
