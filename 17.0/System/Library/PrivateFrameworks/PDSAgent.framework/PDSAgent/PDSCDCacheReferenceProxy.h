@class NSPersistentContainer, PDSCDCacheContainer;

@interface PDSCDCacheReferenceProxy : NSProxy

@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheContainer:(id)a0 persistentContainer:(id)a1;

@end
