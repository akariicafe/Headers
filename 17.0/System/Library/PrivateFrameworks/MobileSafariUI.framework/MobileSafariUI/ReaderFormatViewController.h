@class SFReaderAppearanceThemeSelector, NSString, UICollectionView, UICollectionViewCellRegistration;
@protocol SFReaderContext, _SFSettingsAlertOptionsGroupController;

@interface ReaderFormatViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SFReaderAppearanceThemeSelector *_themeSelector;
    id<_SFSettingsAlertOptionsGroupController> _fontGroupController;
    UICollectionViewCellRegistration *_cellRegistrations[2];
}

@property (readonly, nonatomic) id<SFReaderContext> readerContext;
@property (readonly, nonatomic) long long provenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)loadView;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_updateCloseButton;
- (id)initWithReaderContext:(id)a0 provenance:(long long)a1;

@end
