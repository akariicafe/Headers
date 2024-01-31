@class MTLIOAccelDevice, MTLIOAccelDeviceShmemPool;

@interface MTLIOAccelDeviceShmem : NSObject {
    struct _MTLIOAccelDeviceShmemPrivate { MTLIOAccelDeviceShmemPool *pool; struct { MTLIOAccelDeviceShmem *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; } _priv;
    MTLIOAccelDevice *_device;
    BOOL purgeable;
}

@property (readonly) void *virtualAddress;
@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;

- (void)dealloc;
- (id)initWithDevice:(id)a0 shmemSize:(unsigned int)a1;

@end
