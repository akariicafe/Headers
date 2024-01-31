@class PHPhotoLibrary, PXPeopleSectionedDataSource, NSMutableDictionary, PXPeopleProgressManager, PXLibraryFilterState, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {
    BOOL _didInitiateReCacheRequest;
    BOOL _didInitiatePeopleCountFetchRequest;
    BOOL _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) PXPeopleProgressManager *progressMgr;
@property (copy, nonatomic) id /* block */ requestCompletion;
@property (nonatomic) long long cachedPeopleCount;
@property _Atomic int currentRequestId;
@property (retain) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) BOOL isCountAvailable;
@property (readonly, nonatomic) long long peopleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (id)_visiblePersons;
- (BOOL)_shouldShowInterstitialProgress;
- (void)_appWillEnterForeground;
- (void)_asyncAddImagesToCacheWithPersons:(id)a0 displayScale:(double)a1 completion:(id /* block */)a2;
- (void)_handleRequestResult:(id)a0 forRequestID:(_Atomic int)a1 person:(id)a2 atIndex:(long long)a3 error:(id)a4 completion:(id /* block */)a5;
- (void)_prepareIfNeeded;
- (void)_reCacheImagesWithDisplayScale:(double)a0 completion:(id /* block */)a1;
- (void)_updateCachedCountIfNeeded;
- (void)imageCacheDidChanged:(id)a0;
- (void)peopleSectionedDataSource:(id)a0 didApplyIncrementalChanges:(id)a1;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)a0;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 completion:(id /* block */)a2;

@end
