@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void)registerActivity;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;
- (void)start;
- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (BOOL)getVolume:(int *)a0 forPath:(id)a1;
- (void)registerCacheDeleteCallbacks;
- (void).cxx_destruct;
- (id)allStorageVolumes;

@end
