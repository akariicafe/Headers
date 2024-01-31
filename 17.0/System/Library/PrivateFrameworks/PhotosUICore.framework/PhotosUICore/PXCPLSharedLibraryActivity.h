@class NSString, PHFetchResult, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXCPLSharedLibraryActivity : PXObservable <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHFetchResult *_libraryScopeFetchResult;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long movingToShared;
@property (readonly, nonatomic) unsigned long long movingToPersonal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(long long)a0;
- (id)init;
- (void)setMovingToShared:(unsigned long long)a0;
- (void)setMovingToPersonal:(unsigned long long)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void)_queue_fetchLibraryScopeForPhotoLibrary:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)_updateScopeStatusCounts;
- (void)_queue_updateScopeStatusCounts;
- (void)_queue_handleCloudStatusCounts:(id)a0 error:(id)a1 libraryScope:(id)a2;
- (void)_setMovingToShared:(unsigned long long)a0 movingToPersonal:(unsigned long long)a1;

@end
