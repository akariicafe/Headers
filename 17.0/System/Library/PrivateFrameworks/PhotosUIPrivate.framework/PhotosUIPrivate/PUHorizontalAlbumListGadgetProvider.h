@class PXPhotoKitCollectionsDataSourceManager, PUAlbumsGadgetProvider, NSString, PHPhotoLibrary, PUSessionInfo, PXExtendedTraitCollection;

@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUAlbumsGadgetProvider *albumsGadgetProvider;
@property (readonly, nonatomic) NSString *title;
@property (readonly) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)startLoadingRemainingData;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_fromMyMacConfiguration;
- (id)_newRootConfiguration;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)_canProvideGadgets;
- (void)pauseLoadingRemainingData;
- (void)_resetGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_handleDataSourceChange;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)generateGadgets;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 sessionInfo:(id)a2 photoLibrary:(id)a3;
- (id)_seeAllViewController;
- (id)_newConfiguration;
- (void)loadDataForGadgets;

@end
