@class PXCMMMomentShareInvitationsDataSource, NSString, NSMutableOrderedSet, PHPhotoLibrary, NSObject, PXCMMMomentShareInvitationsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
    long long _filter;
}

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mostRecentCreationDate;
+ (id)mostRecentCreationDateForPhotoLibrary:(id)a0;

- (void)setFilter:(long long)a0;
- (id)init;
- (id)mediaProvider;
- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2 changedObjects:(id)a3;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)a0;
- (id)momentShares;

@end
