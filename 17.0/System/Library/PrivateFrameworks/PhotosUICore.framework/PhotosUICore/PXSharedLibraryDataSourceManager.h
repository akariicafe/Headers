@class PXSharedLibraryDataSource;

@interface PXSharedLibraryDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXSharedLibraryDataSource *dataSource;

+ (id)currentExitingDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)currentInvitationsDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)currentPreviewDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)currentSharedLibraryDataSourceManagerForPhotoLibrary:(id)a0;
+ (id)exitingDataSourceManagerForPhotoLibrary:(id)a0 type:(long long)a1;
+ (id)invitationsDataSourceManagerForPhotoLibrary:(id)a0 type:(long long)a1;
+ (id)keyPathsAffectingCurrentExitingDataSourceManager;
+ (id)keyPathsAffectingCurrentInvitationsDataSourceManager;
+ (id)keyPathsAffectingCurrentPreviewDataSourceManager;
+ (id)keyPathsAffectingCurrentSharedLibraryDataSourceManager;
+ (id)previewDataSourceManagerForPhotoLibrary:(id)a0 type:(long long)a1;
+ (id)sharedLibraryDataSourceManagerForPhotoLibrary:(id)a0 type:(long long)a1;

- (id)fetchPreview;
- (id)fetchExiting;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchSharedLibrary;

@end
