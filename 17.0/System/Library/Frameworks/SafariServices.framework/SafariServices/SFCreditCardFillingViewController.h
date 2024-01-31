@class NSString, SFFormAutocompleteState, NSArray, UICollectionView, UIImageView;

@interface SFCreditCardFillingViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPredictiveViewController> {
    NSArray *_creditCards;
    UICollectionView *_collectionView;
    UIImageView *_leftShadowView;
    UIImageView *_rightShadowView;
    double _lastLayoutWidth;
    double _cachedCellWidth;
}

@property (readonly, weak, nonatomic) SFFormAutocompleteState *formAutocompleteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)viewDidLayoutSubviews;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)_calculateCellWidthForCollectionViewWidth:(double)a0;
- (void)_cardDataChanged:(id)a0;
- (void)_loadCardData;
- (id)initWithFormAutocompleteState:(id)a0;

@end
