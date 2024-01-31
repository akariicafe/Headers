@class NSString;

@interface VSSpeechCache : NSObject

@property (class, readonly) VSSpeechCache *defaultCacheStore;

@property (retain, nonatomic) NSString *dirPath;
@property (retain, nonatomic) NSString *preinstalledCacheDir;

- (id)initWithStorePath:(id)a0;
- (void)deleteCache;
- (void)cleanCache;
- (unsigned long long)totalCacheSize;
- (id)addCache:(id)a0;
- (BOOL)isPreinstalledCacheAvailableForRequest:(id)a0;
- (void).cxx_destruct;
- (id)cacheDataForKey:(id)a0;
- (id)preinstalledCacheForText:(id)a0 language:(id)a1 name:(id)a2;

@end
