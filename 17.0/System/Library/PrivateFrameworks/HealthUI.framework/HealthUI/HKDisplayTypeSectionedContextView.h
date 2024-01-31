@class NSString, NSArray, NSMutableDictionary, UICollectionViewLayout, UICollectionView, HKDisplayTypeContextItem, HKDisplayTypeContextVerticalCollectionViewCell, NSIndexPath;
@protocol HKDisplayTypeSectionedContextViewDelegate;

@interface HKDisplayTypeSectionedContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextVerticalCollectionViewCellDelegate> {
    long long _style;
    BOOL _topInsetsWithNoHeaderEnabled;
    BOOL _bottomInsetsEnabled;
    BOOL _horizontalInsetsEnabled;
    double _contentViewTopInset;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
    NSIndexPath *_lastSelectedIndex;
}

@property (retain, nonatomic) HKDisplayTypeContextVerticalCollectionViewCell *sizingCell;
@property (retain, nonatomic) HKDisplayTypeContextItem *sizingItem;
@property (nonatomic) double sizingCellEstimatedHeight;
@property (retain, nonatomic) NSMutableDictionary *collectionViewLayoutCache;
@property (retain, nonatomic) NSArray *displayTypeContextSections;
@property (weak, nonatomic) id<HKDisplayTypeSectionedContextViewDelegate> delegate;
@property (nonatomic) BOOL useBottomInsets;
@property (nonatomic) BOOL useHorizontalInsets;
@property (nonatomic) BOOL useTopInsetsWithNoHeader;
@property (nonatomic) double contentViewTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)_contentHeight;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)scrollToTop;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (void)selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)_contentWidth;
- (double)_interItemSpacing;
- (void)deselectAllItemsAnimated:(BOOL)a0;
- (BOOL)_appendHeaderForSectionIndex:(long long)a0;
- (id)_buildCollectionViewLayoutWithBottomInsets:(BOOL)a0 horizontalInsets:(BOOL)a1 topInsetsWithNoHeader:(BOOL)a2;
- (double)_cellSizingWidth;
- (id)_collectionViewLayoutForHorizontalTwoOverlaysWithConfig:(id)a0;
- (id)_collectionViewLayoutWithLayoutGroup:(id)a0 bottomInsets:(BOOL)a1 horizontalInsets:(BOOL)a2 topInsetsWithNoHeader:(BOOL)a3;
- (double)_collectionViewLineSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_contentItemInsetsWithTopInsets:(BOOL)a0 BottomInsets:(BOOL)a1 horizontalInsets:(BOOL)a2;
- (id)_currentConfigurationWithBottomInsets:(BOOL)a0 horizontalInsets:(BOOL)a1 topInsetsWithNoHeader:(BOOL)a2;
- (id)_defaultCollectionViewLayoutWithConfiguration:(id)a0;
- (double)_estimateCellHeightForCell:(id)a0;
- (double)_estimatedDynamicCellHeight;
- (void)_findAndInvalidateNearestCollectionViewCell;
- (void)_handleSelection:(id)a0 indexPath:(id)a1 informDelegate:(BOOL)a2;
- (BOOL)_isHorizontalInTwoOverlaysMode;
- (id)_makeDummySizingItem;
- (id)_makeSizingItemWithItem:(id)a0;
- (double)_maximumHeaderLabelLength;
- (double)_preferredCollectionViewHeightForCount:(long long)a0;
- (void)_reconfigureCollectionViewLayoutAndInsetsIfNecessary;
- (long long)_rowsForScreenSize;
- (void)_updateSizingCellEstimatedHeightIfNecessary;
- (void)_updateSizingCellWithContextItemSections:(id)a0;
- (long long)_widthDesignationFromTraitCollection:(id)a0;
- (id)createCellWithItem:(id)a0;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)a0;

@end
