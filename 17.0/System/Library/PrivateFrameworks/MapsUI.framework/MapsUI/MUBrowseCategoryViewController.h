@class UIFont, NSArray, NSString, MUBrowseCategoryCollectionView, MUFixedToTopCollectionViewFlowLayout, NSLayoutConstraint, MKMapItem;
@protocol MUBrowseCategoryViewControllerDelegate;

@interface MUBrowseCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *browseItems;
@property (retain, nonatomic) MUBrowseCategoryCollectionView *collectionView;
@property (retain, nonatomic) MUFixedToTopCollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint;
@property (nonatomic) struct CGSize { double width; double height; } preferredCellSize;
@property (retain, nonatomic) UIFont *preferredCellTitleLabelFont;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MUBrowseCategoryViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableBottomPadding;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapItem:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setupCollectionView;
- (void)_ppt_postNotificationName:(id)a0 object:(id)a1;
- (double)collectionViewBottomPadding;
- (id)didDisplayCategoriesNotificationName;
- (int)placeCardTypeForAnalytics;
- (id)willStartDisplayCategoriesNotificationName;

@end
