@class NSMutableDictionary, NSMapTable, PXDataSectionManager, NSPredicate, PHAssetCollection, NSString, PXPhotoLibraryLocalDefaults, PXNavigationListItemDataSectionManager, NSArray, PHPhotoLibrary, PXSidebarDataContext, PXOutlineDataSectionManager, PXLibraryFilterState;
@protocol PXSidebarDataSourceControllerDelegate;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver> {
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjects;
    NSArray *_arrangedObjectIdentifiers;
}

@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSMapTable *requestDetailsBySidebarImageRequestID;
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager;
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager;
@property (readonly, nonatomic) PXSidebarDataContext *context;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (readonly, nonatomic) PHAssetCollection *pickerAllPhotosVirtualCollection;
@property (weak, nonatomic) id<PXSidebarDataSourceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumsDataSectionManagerForLibrary:(id)a0 mediaTypesItemManager:(id)a1 context:(id)a2;
+ (id)allDuplicatesDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)dataSectionManagerForCollection:(id)a0 context:(id)a1;
+ (id)devicesDataSectionManagerForLibrary:(id)a0;
+ (id)hiddenDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)photosDataSectionManagerForLibrary:(id)a0 context:(id)a1 utilitiesIncluded:(BOOL)a2;
+ (id)projectsDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)prototypesDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)trashDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)unableToUploadDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)utilitiesDataSectionManagerForLibrary:(id)a0 context:(id)a1;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)itemForIdentifier:(id)a0;
- (void)cancelImageRequest:(long long)a0;
- (void).cxx_destruct;
- (void)setChangeProcessingPaused:(BOOL)a0 forReason:(id)a1;
- (BOOL)isItemExpanded:(id)a0;
- (id)_childDataSectionManagerForListItem:(id)a0;
- (void)_removeDataSectionManagerForKey:(id)a0;
- (void)_setDataSectionManager:(id)a0 forKey:(id)a1;
- (void)_updateDataSectionForRemovedItems:(id)a0;
- (void)_updateMediaTypesItemManager;
- (void)appearanceDidChange;
- (id)beginRequestForMediaProvider:(id)a0 mediaRequestIDs:(id)a1;
- (void)cancelRequestDetails:(id)a0;
- (id)child:(long long)a0 ofItem:(id)a1;
- (id)childDataSectionForItem:(id)a0;
- (id)childrenOfListItem:(id)a0;
- (id)dataSectionManagerForItem:(id)a0;
- (void)didNavigateToListItem:(id)a0;
- (id)infoForItem:(id)a0 childIndex:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 libraryFilterState:(id)a1 sectionEnablementProvider:(id)a2;
- (id)initWithPhotoLibrary:(id)a0 libraryFilterState:(id)a1 sectionEnablementProvider:(id)a2 options:(unsigned long long)a3 additionalAssetsFilterPredicate:(id)a4 pickerAllPhotosVirtualCollection:(id)a5;
- (id)makeSectionManagers;
- (void)markListItemAsRead:(id)a0;
- (BOOL)moveGroupItem:(id)a0 afterGroupItem:(id)a1;
- (long long)numberOfChildrenOfItem:(id)a0;
- (id)outlineDataSectionManager:(id)a0 arrangedSectionContent:(id)a1;
- (long long)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (void)setExpanded:(BOOL)a0 forItem:(id)a1;

@end
