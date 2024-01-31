@class NSString, NSArray, PSRootController, PSSpecifier, PHPhotoLibrary, UICollectionView, PUStorageTipCollectionViewDataSectionManager, PUStorageTipCollectionViewDataSection, UIViewController;
@protocol PSController;

@interface PUStorageTipListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PXDataSectionManagerChangeObserver, PSController> {
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *displayedItems;
@property (retain, nonatomic) PUStorageTipCollectionViewDataSectionManager *dataSectionManager;
@property (retain, nonatomic) PUStorageTipCollectionViewDataSection *currentDataSection;
@property (nonatomic) long long storageRecovered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLoad;
- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)parentController;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)_updateDisplayedItems;
- (id)storageViewForTipType:(unsigned long long)a0;

@end
