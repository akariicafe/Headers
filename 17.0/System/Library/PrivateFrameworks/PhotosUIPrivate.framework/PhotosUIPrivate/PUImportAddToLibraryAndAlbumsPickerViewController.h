@class PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, NSString, PXPhotoKitCollectionsDataSourceManagerConfiguration, PHPhotoLibrary, PHCollection;
@protocol PXMemoryAssetsActionFactory, PXImportAlbumPickerDelegate;

@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PXActionPerformerDelegate> {
    PHCollection *_selectedCollection;
    PHCollection *_createdAlbum;
    BOOL _needsDatasourceUpdate;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (weak, nonatomic) id<PXImportAlbumPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

+ (unsigned long long)cellTypeForPosition:(id)a0;
+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)undoManagerForActionPerformer:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)_dismissPicker;
- (void)_updateDatasource;
- (id)_userCreatredAlbumsPhotoKitConfiguration;
- (void)configureDataSourceManagerConfiguration:(id)a0;
- (id)posterImageForCollection:(id)a0 indexPath:(id)a1 forCellType:(unsigned long long)a2;

@end
