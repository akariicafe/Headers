@class NSArray, SearchUIMultiResultRowModel, NSString;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUIMultiResultCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SearchUIHomeScreenEngagementDelegate>

@property (retain) SearchUIMultiResultRowModel *rowModel;
@property (retain) NSArray *visibleResults;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<SearchUIFeedbackDelegateInternal> feedbackDelegate;
@property (nonatomic) BOOL highlightFirstCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)updateWithRowModel:(id)a0;
- (void)deleteIcon:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)updateCountsAnimated:(BOOL)a0;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setIsExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)focusGroupIdentifier;

@end
