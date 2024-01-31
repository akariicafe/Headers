@class NSDate, NSString, TestTelemetry, NSMutableSet, NSURL, NSNumber, CacheDeleteVolume;

@interface AppCache : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *bundleRecords;
@property (readonly, nonatomic) CacheDeleteVolume *cdVol;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly) BOOL isDataseparated;
@property (readonly) BOOL isPlaceholder;
@property (readonly) BOOL isPlugin;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *userManagedAssetsURL;
@property (retain, nonatomic) NSNumber *lastKnownCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownTmpSize;
@property (retain, nonatomic) NSNumber *lastKnownFreespace;
@property (retain, nonatomic) NSDate *lastUsed;
@property double timestamp;
@property (retain, nonatomic) TestTelemetry *telemetry;

+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 personaUniqueString:(id)a3 isDataseparated:(BOOL)a4 isPlaceholder:(BOOL)a5 isPlugin:(BOOL)a6 telemetry:(id)a7;
+ (void)enumerateWithContainerQuery:(id)a0 container_class:(unsigned long long)a1 telemetry:(id)a2 block:(id /* block */)a3;
+ (void)enumerateAppCachesOnVolume:(id)a0 telemetry:(id)a1 block:(id /* block */)a2;

- (id)cachePath;
- (BOOL)validate;
- (int)urgency;
- (void)invalidate;
- (unsigned long long)tmp:(BOOL)a0 purge:(BOOL)a1 all:(BOOL)a2;
- (id)initWithBundleRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 personaUniqueString:(id)a3 isDataseparated:(BOOL)a4 isPlaceholder:(BOOL)a5 isPlugin:(BOOL)a6 telemetry:(id)a7;
- (void)addBundleRecords:(id)a0;
- (id)description;
- (void)addBundleRecord:(id)a0;
- (id)tmpPath;
- (void).cxx_destruct;
- (unsigned long long)groupCache:(BOOL)a0;
- (long long)three_days_ago;
- (unsigned long long)clearCaches:(BOOL)a0;
- (unsigned long long)caches:(BOOL)a0 purge:(BOOL)a1;
- (BOOL)moveCacheAside:(id)a0;

@end
