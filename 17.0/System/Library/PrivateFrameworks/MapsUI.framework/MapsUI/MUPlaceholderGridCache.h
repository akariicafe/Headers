@class UIImage, MKMapSnapshotter;

@interface MUPlaceholderGridCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _snapshotterLock;
    MKMapSnapshotter *_lightSnapshotter;
    MKMapSnapshotter *_darkSnapshotter;
}

@property (readonly, nonatomic) UIImage *lightGrid;
@property (readonly, nonatomic) UIImage *darkGrid;

+ (id)unretainedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_saveLightGrid:(id)a0;
- (void)_cancelSnapshots;
- (void)_saveDarkGrid:(id)a0;
- (void)loadPlaceholderGridImages;

@end
