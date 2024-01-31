@class NSString, PXUpdater, PXPhotoKitPeopleSuggestionsDataSource, PXPhotoKitPeopleSuggestionsDataSourceState, NSMutableOrderedSet, NSObject, PHAssetCollection;
@protocol OS_dispatch_queue;

@interface PXPhotoKitPeopleSuggestionsDataSourceManager : PXPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    BOOL _isPrefetching;
    BOOL _hasCreatedInitialDataSource;
    BOOL _needsDeferredLoading;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedWorkerQueue;

@property (readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PXUpdater *updater;
@property (nonatomic) BOOL hasStartedLoadingFinalDataSource;
@property (nonatomic) BOOL hasFinishedLoadingFinalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)a0;
+ (id)personsForClient:(unsigned long long)a0 fetchOptions:(id)a1;
+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)a0;
+ (id)sharedLibraryPeopleSuggestionsDataSourceManager;

- (BOOL)isLoading;
- (id)mediaProvider;
- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)startLoading;
- (void).cxx_destruct;
- (void)cancelLoading;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)people;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)a0;
- (id)_initWithAssetCollection:(id)a0;
- (void)_loadFinalDataSource;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (void)boostLoading;
- (id)initWithPeopleFetchResult:(id)a0;
- (void)startPrefetchingIfNeeded;

@end
