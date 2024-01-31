@class IOSurfaceRemotePerSurfaceGlobalState;

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {
    struct __IOSurfaceClient { } *_surface;
    unsigned int _refcount;
}

@property (retain, nonatomic) IOSurfaceRemotePerSurfaceGlobalState *globalState;
@property (readonly, nonatomic) struct __IOSurfaceClient { } *surface;
@property (readonly, nonatomic) unsigned int debugRefCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)mergeExtraData:(id)a0;
- (void)addClientReferenceToSurfaceWithExtraData:(id)a0;
- (id)initWithSurface:(struct __IOSurfaceClient { } *)a0 mappedAddress:(void *)a1 mappedSize:(unsigned long long)a2 extraData:(id)a3;
- (BOOL)removeClientReferenceToSurface;

@end
