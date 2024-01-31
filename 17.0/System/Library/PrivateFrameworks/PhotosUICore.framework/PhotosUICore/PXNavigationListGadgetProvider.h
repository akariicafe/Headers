@class NSNumber, NSString, PXSharedLibraryStatusProvider, NSPredicate, PHPhotoLibrary, PXNavigationListDataSectionManager, PXExtendedTraitCollection;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver> {
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager;
@property (readonly, nonatomic) BOOL isPresentedInPicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (retain, nonatomic) NSNumber *hiddenAlbumVisibleCache;
@property (retain, nonatomic) NSNumber *contentPrivacyEnabledCache;
@property (nonatomic) BOOL backgroundFetchingIsActive;
@property (nonatomic) BOOL shouldShowNavigationListOnIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)startLoadingRemainingData;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (BOOL)_isContentPrivacyEnabled;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 isPresentedInPicker:(BOOL)a2 isLimitedLibraryPicker:(BOOL)a3 assetsFilterPredicate:(id)a4 excludesHiddenAlbum:(BOOL)a5 photoLibrary:(id)a6;
- (void)pauseLoadingRemainingData;
- (void)_resetGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)_updateGadgets;
- (BOOL)_shouldHiddenAlbumBeVisible;
- (void)_initializeDataSourceManagerIfNeeded;
- (void)loadDataForGadgets;

@end
