@class NSCache, NSString;

@interface EMFAnchoredSearchAnchorsCache : NSObject <NSCacheDelegate>

@property (retain, nonatomic) NSCache *anchorsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (id)init;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (void)purgeAllCachedAnchorCollections;
- (id)anchorCollectionForLocaleIdentifier:(id)a0;
- (void)removeAnchorCollectionForLocaleIdentifier:(id)a0;
- (void)setAnchorCollection:(id)a0 forLocaleIdentifier:(id)a1;

@end
