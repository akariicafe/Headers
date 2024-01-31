@interface PLComputeCachePolicyConfiguration : NSObject

@property (readonly, nonatomic) BOOL isBackupEnabled;
@property (readonly, nonatomic) BOOL isRestoreEnabled;
@property (readonly, nonatomic) unsigned long long minAssetCount;
@property (readonly, nonatomic) unsigned long long minCloudStorageTier;
@property (readonly, nonatomic) double minSnapshotTimeInterval;
@property (readonly, nonatomic) unsigned long long minExpungedAssetCount;

- (void)configurationValueForKey:(id)a0 configurationDictionary:(id)a1 valueBlock:(id /* block */)a2;
- (id)initWithConfigurationDictionary:(id)a0;

@end
