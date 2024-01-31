@class PBUIColorStatistics, NSString, UIImage, NSURL, PBUIImageOnDiskFormat, _UILegibilitySettings, NSDictionary, PBUIReplicaSourceObserverBox, BSAtomicFlag;
@protocol PBUIURLSourceDelegate;

@interface PBUIURLBackedSnapshotSource : NSObject <PBUIColorStatisticsDelegate, PBUIReplicaSnapshotSource, PBUIPosterReplicaSnapshotProviding> {
    PBUIReplicaSourceObserverBox *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BSAtomicFlag *_isFrozen;
    BSAtomicFlag *_isDirty;
    BSAtomicFlag *_needsColorSettingsUpdate;
}

@property (retain, nonatomic) UIImage *snapshot;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (weak, nonatomic) id<PBUIURLSourceDelegate> delegate;
@property (readonly, copy, nonatomic) PBUIColorStatistics *contentColorStatistics;
@property (readonly, copy, nonatomic) NSDictionary *snapshotMetadata;
@property (readonly, copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSURL *snapshotURL;
@property (readonly, nonatomic) NSURL *snapshotColorStatisticsURL;
@property (readonly, nonatomic) NSURL *snapshotMetadataURL;
@property (readonly, nonatomic) PBUIImageOnDiskFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)setLegibilitySettings:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)colorStatisticsDidChange:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)notifyObservers;
- (void)currentSnapshotInterfaceOrientation:(long long *)a0 outDeviceOrientation:(long long *)a1;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)registerSnapshotSourceObserver:(id)a0;
- (void)setSnapshotURL:(id)a0;
- (id)buildCacheIdentifier;
- (id)encoderForSnapshot;
- (id)initWithSnapshotURL:(id)a0 colorStatisticsURL:(id)a1 metadataURL:(id)a2 format:(id)a3 delegate:(id)a4;
- (void)invalidateCurrentSnapshot;
- (void)notifyObserversIfNeeded;
- (void)readColorStatisticsFromDisk;
- (id)readFromDiskWithError:(out id *)a0;
- (void)readMetadataFromDisk;
- (BOOL)removeOnDiskSnapshotWithError:(out id *)a0;
- (BOOL)saveColorStatistics;
- (void)setSnapshotColorStatisticsURL:(id)a0;
- (void)setSnapshotMetadataURL:(id)a0;
- (void)setupSnapshotSourceForSnapshotURL:(id)a0 snapshotColorStatisticsURL:(id)a1 snapshotMetadataURL:(id)a2;
- (id)snapshotSourceForObserver:(id)a0;
- (void)updateColorStatisticsWith:(id)a0;
- (void)updateFromDisk;
- (BOOL)updateMetadataWith:(id)a0 error:(out id *)a1;
- (BOOL)updateWithImage:(id)a0 contentColorStatistics:(id)a1 metadata:(id)a2 error:(out id *)a3;

@end
