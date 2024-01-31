@class NSDate, NSString, PXUpdater, PXSharedLibrarySharingSuggestionsCountsManager, PHPhotoLibrary, PXSharedLibrarySharingSuggestionsDataSource, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXSharedLibrarySharingSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableSharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsDataSourceDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_promiseByContainer;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *countsManager;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSource *currentDataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *considerNewAfterDate;
@property (retain, nonatomic) NSDate *aggregateBeforeDate;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)_queue_fulfillRemainingPromises;
- (id)dataSource:(id)a0 promiseForContainer:(id)a1;
- (id)_createDataSourceWithSharingSuggestions:(id)a0;
- (void)_invalidatePromisesUnreadState;
- (id)_promiseForContainer:(id)a0;
- (void)_publishChangesForForContainers:(id)a0;
- (void)_scheduleFulfillRemainingPromises;
- (void)_setPromise:(id)a0 forContainer:(id)a1;
- (void)_updatePromisesUnreadState;

@end
