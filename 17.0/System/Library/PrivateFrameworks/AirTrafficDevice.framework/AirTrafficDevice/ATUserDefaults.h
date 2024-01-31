@class NSDictionary, NSNumber, NSMutableDictionary;

@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}

@property (nonatomic) BOOL hasCompletedDataMigration;
@property (retain, nonatomic) NSDictionary *diskUsageInfo;
@property (copy, nonatomic) NSNumber *minimumNetworkLinkQualityForDownloads;

+ (id)sharedInstance;
+ (id)readOnlyDefaults;
+ (void)synchronize;

- (id)init;
- (void)updateLastSyncWithHostLibrary:(id)a0;
- (void)_updateDefaults;
- (void)removeHost:(id)a0;
- (void).cxx_destruct;
- (id)allHosts;
- (id)hostInfoForIdentifier:(id)a0;
- (void)updateHostInfo:(id)a0 disabledAssetTypes:(id)a1;

@end
