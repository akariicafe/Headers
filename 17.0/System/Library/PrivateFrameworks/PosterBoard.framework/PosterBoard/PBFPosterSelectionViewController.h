@class NSUUID, NSString, NSArray, PBFPosterExtensionDataStore, NSSet, PBFPosterGalleryDataProvider, NSDictionary, UICollectionViewDiffableDataSource, PRSwitcherConfiguration, UIBarButtonItem, NSMapTable;
@protocol PBFPosterSelectionViewControllerDelegate;

@interface PBFPosterSelectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver> {
    UIBarButtonItem *_doneButtonItem;
    PBFPosterGalleryDataProvider *_galleryDataProvider;
    UICollectionViewDiffableDataSource *_dataSource;
    NSSet *_allowedConfigurationUUIDs;
    NSUUID *_selectedConfigurationUUID;
    PBFPosterExtensionDataStore *_dataStore;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
    NSDictionary *_uuidsToConfigurations;
    NSMapTable *_configurationsToMetadata;
}

@property (nonatomic) long long layoutOrientation;
@property (weak, nonatomic) id<PBFPosterSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)_cancelBarButtonItem;
- (void)viewDidLoad;
- (void)_orientationDidChange;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewIsAppearing:(BOOL)a0;
- (id)_doneBarButtonItem;
- (id)compositionalLayout;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)_validateDoneButton;
- (void)_applySnapshotForCurrentStateWithAnimation:(BOOL)a0;
- (id)_cellForItemAtIndexPath:(id)a0 identifier:(id)a1;
- (void)_reloadDataWithAnimation:(BOOL)a0;
- (id)initWithAllowedConfigurationUUIDs:(id)a0 selectedConfigurationUUID:(id)a1 galleryDataProvider:(id)a2 dataStore:(id)a3;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)a0;
- (id)sectionWithEnvironment:(id)a0;

@end
