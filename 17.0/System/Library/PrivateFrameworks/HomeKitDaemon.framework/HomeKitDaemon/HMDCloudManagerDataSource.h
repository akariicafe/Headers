@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (BOOL)isKeychainSyncEnabled;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

@end
