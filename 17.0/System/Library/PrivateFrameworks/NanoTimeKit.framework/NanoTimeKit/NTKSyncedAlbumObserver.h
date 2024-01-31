@class NSMutableDictionary;

@interface NTKSyncedAlbumObserver : NSObject {
    NSMutableDictionary *_deviceAlbumObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forDevice:(id)a1;
- (void)removeObserver:(id)a0 forDevice:(id)a1;
- (id)syncedAlbumNameForDevice:(id)a0;

@end
