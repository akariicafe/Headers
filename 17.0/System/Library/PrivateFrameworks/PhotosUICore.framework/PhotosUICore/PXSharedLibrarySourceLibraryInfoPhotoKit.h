@class PXSharedLibraryStatusProvider, NSString, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXSharedLibrarySourceLibraryInfoPhotoKit : NSObject <PXSharedLibrarySourceLibraryInfo>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryExiting;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryInitialSyncCompleted;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)pickerConfiguration;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isCPLExitModeError:(id)a0;
- (BOOL)_isRegionUnsupportedError:(id)a0;
- (BOOL)_isTooManyParticipantsError:(id)a0;
- (BOOL)_isU13RestrictedError:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })assetsCountsForAssetLocalIdentifiers:(id)a0;
- (id)createDataSourceManager;
- (void)createPreviewWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)createSharedLibraryWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)fetchEstimatedAssetsCountsForExit:(BOOL)a0 imageCount:(unsigned long long *)a1 videoCount:(unsigned long long *)a2 audioCount:(unsigned long long *)a3 itemCount:(unsigned long long *)a4;
- (void)fetchEstimatedAssetsCountsForStartDate:(id)a0 personUUIDs:(id)a1 completion:(id /* block */)a2;
- (void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedStartDateForPersonUUIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)isFailedToURLFetchOwnedSharedLibraryError:(id)a0;
- (BOOL)isSharedLibraryNotFoundError:(id)a0;
- (BOOL)presentCustomInformationForError:(id)a0 customTitle:(id *)a1 customMessage:(id *)a2;
- (BOOL)presentServerGeneratedMessageForError:(id)a0 customMessage:(id *)a1 learnMoreURL:(id *)a2;

@end
