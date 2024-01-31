@class NSString, PHFetchResult, PHPhotoLibrary;

@interface PXSharedLibraryPhotoKitDataSourceManager : PXSharedLibraryDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    long long _type;
    PHFetchResult *_fetchResult;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitingDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)sharedLibraryDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)invitationsDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)previewDataSourceManagerForPhotoLibrary:(id)a0;

- (id)init;
- (id)initWithType:(long long)a0 fetchResult:(id)a1;
- (id)fetchPreview;
- (id)createInitialDataSource;
- (id)fetchExiting;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)fetchSharedLibrary;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
