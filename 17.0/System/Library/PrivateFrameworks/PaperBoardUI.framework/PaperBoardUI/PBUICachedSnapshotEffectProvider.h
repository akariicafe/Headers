@class NSString, PBUIBakedEffectSnapshotSource, BSUIMappedImageCache, PBUIReplicaSourceObserverBox;
@protocol PBUIPosterReplicaSnapshotProviding, PBUIWallpaperEffectCompositor, BSInvalidatable;

@interface PBUICachedSnapshotEffectProvider : NSObject <PBUIPosterReplicaSourceObserver, PBUIPosterReplicaSnapshotProviding, BSInvalidatable> {
    id<BSInvalidatable> _snapshotSubscription;
    id<PBUIPosterReplicaSnapshotProviding> _snapshotProvider;
    PBUIReplicaSourceObserverBox *_observers;
    id<PBUIWallpaperEffectCompositor> _backdropCompositor;
    id<PBUIWallpaperEffectCompositor> _materialCompositor;
    PBUIBakedEffectSnapshotSource *_currentSource;
    BSUIMappedImageCache *_cache;
}

@property (readonly, nonatomic) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)registerSnapshotSourceObserver:(id)a0;
- (id)initForSnapshotProvider:(id)a0 cache:(id)a1;
- (id)initForSnapshotProvider:(id)a0 cacheIdentifier:(id)a1;
- (void)setNeedsSourceUpdate;
- (id)snapshotSourceForObserver:(id)a0;

@end
