@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *storeFront;

- (id)cacheDirectory;
- (id)cachePath;
- (id)initWithMediaType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)_hasCachedData;
- (BOOL)addCacheData:(id)a0;
- (id)cacheTitle;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;

@end
