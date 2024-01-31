@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDocumentResourceCache : NSObject {
    NSURL *_cacheURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_entries;
}

@property (nonatomic) long long maxCacheSizeInBytes;

+ (id)sharedCache;
+ (id)defaultCacheURL;

- (id)init;
- (void)clearCache;
- (id)initWithCacheURL:(id)a0;
- (void).cxx_destruct;
- (id)URLForDocumentResourceDigestString:(id)a0;
- (BOOL)beginDocumentResourceAccessForDigestString:(id)a0;
- (BOOL)cacheDocumentResourceDigestString:(id)a0 extension:(id)a1 sourceURL:(id)a2 fileSize:(long long)a3 wasDownloaded:(BOOL)a4;
- (void)endDocumentResourceAccessForDigestString:(id)a0;
- (id)entryForDigestString:(id)a0;
- (void)enumerateEntriesFromCacheURLWithHandler:(id /* block */)a0;
- (void)reloadEntries;
- (void)shrinkCache;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)a0;

@end
