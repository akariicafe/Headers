@class PHPhotoLibrary, NSMapTable, NSString;

@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement>

@property (readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange;
@property (readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isPhotosPicker;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (nonatomic) BOOL registeredAsPrefObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureEnablementOfSectionManager:(id)a0 enablementItem:(long long)a1;
- (void)_configureEnablementOfSectionManager:(id)a0 enablementItem:(long long)a1 setupObservation:(BOOL)a2;
- (void)_observeAccountsStoreForManager:(id)a0 enablementItem:(long long)a1;
- (void)_observeDefaultsForManager:(id)a0 enablementItem:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 isPhotosPicker:(BOOL)a1 excludesHiddenAlbum:(BOOL)a2;

@end
