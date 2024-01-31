@class UISelectionFeedbackGenerator, JTCollectionView, NSIndexPath, JTCollectionViewFlowLayout, UIView, UILabel;
@protocol CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate;

@interface CFXFilterEffectPickerView : CFXEffectPickerView

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) JTCollectionView *collectionView;
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UIView *compactSelectionView;
@property (retain, nonatomic) UILabel *compactSelectedTitleView;
@property (nonatomic) unsigned long long cachedEffectCount;
@property (nonatomic, getter=isDisplayingExpandedLayout) BOOL displayExpandedLayout;
@property (nonatomic) struct CGSize { double width; double height; } lastViewSize;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) NSIndexPath *lastScrollIndexPath;
@property (nonatomic) struct CGPoint { double x; double y; } previousScrollOffset;
@property (weak, nonatomic) id<CFXFilterEffectPickerViewDataSource> dataSource;
@property (weak, nonatomic) id<CFXFilterEffectPickerViewDelegate> delegate;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)reloadData;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (unsigned long long)selectedIndex;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)didScrollCollectionView;
- (void)configureCell:(id)a0;
- (void)CFX_selectInitialItem;
- (void)subviewsDidLoad;
- (void)CFX_selectItemAtCellIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)CFX_updateTitleForCenterItemAtIndex:(long long)a0;
- (id)effectPickerCellReuseIdentifier;
- (void)buildCompactSelectionViews;
- (void)configureCollectionViewLayout;
- (void)didSelectItemAtCellIndex:(unsigned long long)a0;
- (id)effectPickerCellNibName;
- (id)effectPickerNibName;
- (id)indexPathForCenterOfCollectionView;
- (BOOL)isDisplayingCompactLayout;
- (id)layoutAttributesForNearestItemToCenterWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)orientationDidChange;
- (void)removeCompactSelectionViews;
- (void)selectCenterItem;
- (void)selectEffectWithIdentifier:(id)a0;
- (void)updatePreviewEffectsWhenReloadComplete;

@end
