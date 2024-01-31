@class PRSWallpaperSnapshotObserver, PRSPosterRoleActivePosterObserver, PRSWallpaperLocationStateObserver, PRSPosterRoleCollectionObserver, NSObject;
@protocol OS_dispatch_queue;

@interface PRSWallpaperObserverConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) PRSWallpaperLocationStateObserver *locationStateObserver;
@property (retain, nonatomic) PRSWallpaperSnapshotObserver *snapshotObserver;
@property (retain, nonatomic) PRSPosterRoleActivePosterObserver *activePosterRoleObserver;
@property (retain, nonatomic) PRSPosterRoleCollectionObserver *postersCollectionRoleObserver;

+ (id)configurationWithHandler:(id /* block */)a0;

- (id)init;
- (void)setLocations:(unsigned long long)a0;
- (unsigned long long)locations;
- (BOOL)isValid;
- (void)setQueue:(id)a0;
- (void).cxx_destruct;

@end
