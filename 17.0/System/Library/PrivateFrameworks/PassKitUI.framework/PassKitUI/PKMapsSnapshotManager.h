@class NSFileManager, NSMutableDictionary, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKMapsSnapshotManager : NSObject {
    NSURL *_cacheURL;
    NSFileManager *_fileManager;
    NSMutableArray *_snapshotsKeysToPerform;
    NSMutableDictionary *_snapshotOptionsByKey;
    NSMutableDictionary *_completionBlockByKey;
    NSMutableArray *_snapshotCacheKeys;
    NSMutableDictionary *_snapshotCache;
    BOOL _isSnapshotting;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fileLock;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_processNextRequest;
- (id)_iconForCacheKey:(id)a0;
- (id)_iconFromDiskForCacheKey:(id)a0;
- (id)placeholderWithTraitCollection:(id)a0 completion:(id /* block */)a1;
- (id)snapshotForDisplayRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1 traitCollection:(id)a2 completion:(id /* block */)a3;

@end
