@class NSObject;
@protocol OS_xpc_object;

@interface IOSurfaceRemotePerSurfaceGlobalState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _csid;
    void *_mapped_address;
    unsigned long long _mapped_size;
    NSObject<OS_xpc_object> *_extraData;
}

+ (id)globalStateForSurface:(struct __IOSurfaceClient { } *)a0 mappedAddress:(void *)a1 mappedSize:(unsigned long long)a2 extraData:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)mergeExtraData:(id)a0;
- (id)initWithSurfaceID:(unsigned int)a0 mappedAddress:(void *)a1 mappedSize:(unsigned long long)a2 extraData:(id)a3;

@end
