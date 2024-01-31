@class NSItemProvider, NSString, NSArray, UICollectionView, UICollectionViewDiffableDataSource, WBSStartPageBackgroundImagesDataSource, NSMutableDictionary;
@protocol SFStartPageCustomizationDataSource;

@interface SFStartPageCustomizationViewController : UIViewController <SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, SFStartPageDataSourceObserving> {
    NSArray *_backgroundImages;
    UICollectionView *_backgroundImagesCollectionView;
    UICollectionViewDiffableDataSource *_backgroundImagesCollectionViewDataSource;
    WBSStartPageBackgroundImagesDataSource *_backgroundImagesDataSource;
    BOOL _backgroundSectionUnconditionallyVisible;
    NSMutableDictionary *_identifierToCustomizationItemMap;
    NSMutableDictionary *_identifierToFixedCustomizationItemMap;
    unsigned long long _reloadDataSuppressionCount;
    UICollectionView *_rootCollectionView;
    UICollectionViewDiffableDataSource *_rootCollectionViewDataSource;
    NSItemProvider *_generatedBackgroundImageItemProvider;
}

@property (nonatomic) BOOL showsCloseButton;
@property (weak) id<SFStartPageCustomizationDataSource> dataSource;
@property (nonatomic) unsigned long long preferredBackgroundImagesCollectionViewColumnCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadNavigationItemAnimated:(BOOL)a0;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (id)makeBackgroundImageRegistration;
- (void)showPhotoPicker;
- (void)_setCustomizationSyncWithValue:(id)a0;
- (void)_createGeneratedBackgroundImageItemProvider;
- (void)_updateGeneratedBackgroundImageItemProviderWithImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (void)backgroundImageCellDidSelectClearButton:(id)a0;
- (void)backgroundImagesDidChange:(id)a0;
- (void)didChangeCustomizationItemOrder:(id)a0 forVariant:(long long)a1;
- (id)identifierToCustomizationItemMapForItemVariant:(long long)a0;
- (id)makeBackgroundImageToggleRegistration;
- (id)makeBackgroundImagesCollectionViewLayout;
- (id)makeCustomizationItemRegistration;
- (id)makeCustomizationSyncFooterRegistration;
- (id)makeCustomizationSyncToggleRegistration;
- (id)makeFixedCustomizationItemRegistration;
- (id)makeReorderingHandlers;
- (id)makeRootCollectionViewLayout;
- (void)setCustomizationItemIdentifier:(id)a0 inSection:(id)a1 enabled:(BOOL)a2;
- (void)setUpBackgroundImagesCollectionViewDataSource;
- (void)setUpRootCollectionViewDataSource;
- (BOOL)showsBackgroundImagesCell;
- (void)startPageCustomizationCellDidChangeValue:(id)a0;

@end
