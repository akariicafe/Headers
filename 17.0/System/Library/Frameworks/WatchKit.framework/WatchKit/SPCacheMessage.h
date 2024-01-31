@class NSString, NSData, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject

@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long cacheType;
@property (retain, nonatomic) NSString *assetKey;
@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (retain, nonatomic) NSData *assetData;
@property (retain, nonatomic) SPAssetCacheSyncData *syncData;
@property (nonatomic) unsigned long long error;

+ (id)fromProto:(id)a0;
+ (id)toProto:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
