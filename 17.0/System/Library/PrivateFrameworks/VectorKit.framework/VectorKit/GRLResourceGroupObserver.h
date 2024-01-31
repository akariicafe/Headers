@class NSString;

@interface GRLResourceGroupObserver : NSObject <GEOResourceManifestTileGroupObserver> {
    void *_resourceProvider;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _resourceProviderLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)initWithResourceProvider:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearProvider;

@end
