@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, NSMutableArray;
@protocol SFPrivacyReportGridViewDelegate;

@interface SFPrivacyReportGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SFPrivacyReportGridItemDelegate> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableArray *_cachedRowInfo;
    double _previousCollectionViewWidth;
    BOOL _isAccessibilitySize;
}

@property (copy, nonatomic) NSArray *itemViews;
@property (weak, nonatomic) id<SFPrivacyReportGridViewDelegate> delegate;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (unsigned long long)_gridPositionForItemAtIndexPath:(id)a0;
- (void)_rebuildRowLayoutInfoIfNeeded;
- (void)didUpdateInterItemSpacing:(double)a0;
- (void)itemDidChangeContentSize:(id)a0;
- (BOOL)itemViewCanUseCompactWidth:(id)a0;
- (BOOL)itemViewIsLineBreak:(id)a0;
- (void)updateInterItemSpacing;

@end
