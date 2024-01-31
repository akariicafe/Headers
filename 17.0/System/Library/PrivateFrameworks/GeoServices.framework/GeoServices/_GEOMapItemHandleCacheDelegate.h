@class NSString;

@interface _GEOMapItemHandleCacheDelegate : NSObject <NSCacheDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cache:(id)a0 willEvictObject:(id)a1;

@end
