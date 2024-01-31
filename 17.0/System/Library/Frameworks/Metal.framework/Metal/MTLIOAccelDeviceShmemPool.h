@class MTLIOAccelDeviceShmem, MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmemPool : NSObject {
    struct _MTLIOAccelDeviceShmemPoolPrivate { struct shmemPoolQueue { MTLIOAccelDeviceShmem *tqh_first; id *tqh_last; } queue; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; int count; Class shmemClass; MTLIOAccelDevice *device; unsigned int shmemSize; } _priv;
}

- (void)purge;
- (void)dealloc;
- (void)prune;
- (int)availableCount;
- (void)setShmemSize:(unsigned int)a0;
- (unsigned int)shmemSize;
- (id)initWithDevice:(id)a0 resourceClass:(Class)a1 shmemSize:(unsigned int)a2 options:(id)a3;

@end
