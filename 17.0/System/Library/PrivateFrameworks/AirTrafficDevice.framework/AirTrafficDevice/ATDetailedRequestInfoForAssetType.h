@class NSDictionary, NSMutableDictionary;

@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSMutableDictionary *_mutableContributors;
}

@property (readonly, nonatomic, getter=getTotalBytesSynced) unsigned long long totalBytesSynced;
@property (readonly, nonatomic, getter=getTotalBytesToSync) unsigned long long totalBytesToSync;
@property (readonly, nonatomic, getter=getTotalAssetsToSync) unsigned long long totalAssetsToSync;
@property (readonly, nonatomic, getter=getContributors) NSDictionary *contributors;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)incrementAssetCountToSync;
- (void)updateBytesSynced:(unsigned long long)a0;
- (void)updateBytesToSync:(unsigned long long)a0 forItemIdentifier:(id)a1;

@end
