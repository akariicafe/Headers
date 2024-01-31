@class UIView, NSString, UICollectionViewFlowLayout, AVTUIEnvironment, AVTAttributeEditorSectionHeaderView, AVTAvatarColorSliderContainerView, UICollectionView, AVTAvatarAttributeEditorSectionColorDataSource;
@protocol AVTAvatarAttributeEditorSection, AVTAvatarAttributeEditorControllerSubSelectionDelegate;

@interface AVTAvatarAttributeEditorSectionColorController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarAttributeEditorSectionColorDataSourceDelegate, AVTAvatarColorSliderContainerViewDelegate, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSectionController>

@property (class, readonly, nonatomic) BOOL supportsSelection;

@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionColorDataSource *dataSource;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AVTAvatarColorSliderContainerView *sliderContainerView;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (nonatomic) double currentRelativeContentOffsetX;
@property (readonly, nonatomic) BOOL showsHeader;
@property (nonatomic) BOOL dontAnimateSelection;
@property (nonatomic) BOOL needsScrollToSelected;
@property (retain, nonatomic) AVTAttributeEditorSectionHeaderView *headerView;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (readonly, nonatomic) id<AVTAvatarAttributeEditorSection> section;
@property (nonatomic) long long selectedIndex;

+ (struct CGSize { double x0; double x1; })cellSizeFittingWidth:(double)a0 environment:(id)a1;
+ (struct CGPoint { double x0; double x1; })clampedContentOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1;
+ (double)edgeLengthFittingWidth:(double)a0 environment:(id)a1;
+ (BOOL)updateCollectionViewLayout:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 environment:(id)a2 forExtended:(BOOL)a3 withSlider:(BOOL)a4 numberOfItems:(long long)a5;

- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)reloadData;
- (id)initWithEnvironment:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)createCollectionView;
- (unsigned long long)indexForItem:(id)a0;
- (void)resetToDefaultState;
- (id)prefetchingSectionItemForIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (void)animateWithSpringAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)attributeEditorSectionController:(id)a0 didDeleteSectionItems:(id)a1;
- (void)attributeEditorSectionController:(id)a0 didSelectSectionItem:(id)a1;
- (void)attributeEditorSectionController:(id)a0 didUpdateSectionItem:(id)a1;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)a0;
- (void)attributeSection:(id)a0 didChangeValueForSectionItem:(id)a1;
- (void)cell:(id)a0 willDisplayAtIndex:(long long)a1;
- (void)colorDataSource:(id)a0 didChangeDisplayMode:(long long)a1 previousDisplayMode:(long long)a2;
- (void)colorDataSource:(id)a0 didDeselectItemAtIndex:(long long)a1 shouldReloadModel:(BOOL)a2;
- (void)colorDataSource:(id)a0 didSelectItemAtIndex:(long long)a1 shouldReloadModel:(BOOL)a2;
- (void)colorSliderDidFinishChangingVariation:(double)a0 forItem:(id)a1;
- (void)colorSliderVariationChanged:(double)a0 forItem:(id)a1;
- (void)createSliderContainerView;
- (void)didHighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (void)didSelectItemAtIndex:(long long)a0 cell:(id)a1;
- (void)didUnhighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)evaluateDisplayCondition:(id)a0;
- (double)heightForCollectionViewFittingWidth:(double)a0;
- (double)heightForSectionHeaderFittingWidth:(double)a0;
- (void)hideSliderAnimated:(BOOL)a0;
- (id)initWithDataSource:(id)a0 showsHeader:(BOOL)a1 environment:(id)a2;
- (id)initWithEnvironment:(id)a0 showsHeader:(BOOL)a1;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviewsForIndex:(long long)a0;
- (void)scrollCollectionViewToOrigin;
- (void)scrollCollectionViewToSelectedColor;
- (void)selectIndexPath:(id)a0;
- (void)setSelectedState:(BOOL)a0 animated:(BOOL)a1 forCellAtIndexPath:(id)a2;
- (void)showSliderAnimated:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFocusingItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCell:(id)a0 forItemAtIndex:(long long)a1;
- (void)updateCellLayer:(id)a0 withColorItem:(id)a1 withColorPreset:(id)a2;
- (void)updateCollectionViewLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSectionItem:(id)a0 withVariation:(double)a1;
- (void)updateSliderForSectionItemIfNeeded:(id)a0;
- (void)updateWithSection:(id)a0;
- (id)viewForIndex:(long long)a0;
- (void)willDisplayViewForIndex:(long long)a0;

@end
