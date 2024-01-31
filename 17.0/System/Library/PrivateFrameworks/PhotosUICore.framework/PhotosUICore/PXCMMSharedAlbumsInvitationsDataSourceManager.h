@class PXCMMSharedAlbumsInvitationsDataSourceState, NSString, NSMutableOrderedSet, PXCMMSharedAlbumsInvitationsDataSource, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)mediaProvider;
- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (id)sharedAlbums;
- (void)startLoadingIfNeeded;

@end
