@class NSURL, NSHashTable;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_volumeURL;
}

- (void)dealloc;
- (void)removeVolumeUnmountObserver:(id)a0;
- (id)description;
- (id)initWithVolumeURL:(id)a0;
- (void).cxx_destruct;
- (void)addVolumeUnmountObserver:(id)a0;

@end
