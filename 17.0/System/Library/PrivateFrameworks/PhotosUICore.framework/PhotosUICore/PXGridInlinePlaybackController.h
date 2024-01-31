@class PXUpdater, NSArray, PXEventCoalescer, NSString, NSMapTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver, PXEventCoalescerObserver> {
    NSObject<OS_dispatch_queue> *_recordsQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
}

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL canCreateRecords;
@property (nonatomic) BOOL playbackEnabled;
@property (nonatomic) BOOL applicationActive;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (nonatomic) BOOL autoplaySettingEnabled;
@property (readonly, nonatomic) BOOL shouldCoalescePlayingRecordsUpdates;
@property (readonly, nonatomic) PXEventCoalescer *playingRecordsEventCoalescer;
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (readonly, nonatomic) id<PXDisplayAsset> currentHoveredDisplayAsset;
@property (readonly, nonatomic) BOOL canProvideGeometriesForRecords;
@property (readonly, nonatomic) BOOL shouldEnablePlayback;
@property (readonly, nonatomic) BOOL shouldPlayOnHover;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } criticallyVisibleEdgeInsets;
@property (readonly, nonatomic) long long maxNumberOfPlayingItems;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic) BOOL isOneUpVisible;
@property (nonatomic) BOOL isContextMenuInteractionActive;
@property (nonatomic) BOOL isDragSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsUpdate;
- (void)preferencesDidChange;
- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_updatePlaybackEnabled;
- (BOOL)canUpdatePlayingRecords;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)visibleRectDidChange;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPlayAsset:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (void)didUpdatePlayingRecords;
- (void)outputEventSignaledForCoalescer:(id)a0;
- (id)filterSortedRecordsToPlay:(id)a0;
- (void)_applicationDidResignActive:(id)a0;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (BOOL)_hasAnyPlaybackRecords;
- (void)_startPlaybackForRecords:(id)a0;
- (void)_stopPlaybackForRecords:(id)a0;
- (void)_updateActive;
- (void)_updateCanCreateRecords;
- (void)_updateLowPowerModeEnabled;
- (void)_updatePlayingRecords;
- (void)_updatePlayingRecordsImmediately;
- (void)_updateVisibilityOfRecords;
- (void)checkInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 configurationBlock:(id /* block */)a3;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (BOOL)isPlayingDisplayAsset:(id)a0;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)a0;

@end
