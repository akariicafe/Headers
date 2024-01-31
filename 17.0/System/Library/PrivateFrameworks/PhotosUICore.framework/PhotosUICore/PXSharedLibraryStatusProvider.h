@class PHPhotoLibrary, NSString, PXSharedLibraryDataSourceManager;
@protocol PXSharedLibrary;

@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deferredInitializationLock;
    PXSharedLibraryDataSourceManager *_invitationsDataSourceManager;
    PXSharedLibraryDataSourceManager *_previewDataSourceManager;
    PXSharedLibraryDataSourceManager *_sharedLibraryDataSourceManager;
    PXSharedLibraryDataSourceManager *_exitingDataSourceManager;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasSharedLibrary;
@property (readonly, nonatomic) BOOL hasSharedLibraryOrPreview;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;
@property (readonly, nonatomic) id<PXSharedLibrary> preview;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) id<PXSharedLibrary> exiting;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLibraryStatusProviderWithPhotoLibrary:(id)a0;

- (void)setInvitation:(id)a0;
- (void)_configureInvitationDataSourceManager;
- (void)setHasSharedLibrary:(BOOL)a0;
- (void)_fullfillDeferredInitializationIfNecessary;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateExitingWithChangeNotification:(BOOL)a0;
- (id)_statusDescription;
- (id)fetchPreview;
- (void)_initializeDataSourceManagers;
- (id)fetchExiting;
- (void)_configurePreviewDataSourceManager;
- (void)_configureSharedLibraryDataSourceManager;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setHasPreview:(BOOL)a0;
- (void)_updatePreviewWithChangeNotification:(BOOL)a0;
- (void).cxx_destruct;
- (id)fetchSharedLibrary;
- (void)setExiting:(id)a0;
- (void)setPreview:(id)a0;
- (void)_updateInvitationWithChangeNotification:(BOOL)a0;
- (void)_configureExitingDataSourceManager;
- (id)initWithPhotoLibrary:(id)a0 deferInitialization:(BOOL)a1 initialHasPreview:(BOOL)a2 initialHasSharedLibrary:(BOOL)a3;
- (void)_updateSharedLibraryWithChangeNotification:(BOOL)a0;
- (void)setSharedLibrary:(id)a0;
- (void)_performDeferredInitializationIfNecessary;

@end
