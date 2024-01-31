@class NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, NSLayoutConstraint;
@protocol MKTransitSystemFilterViewDelegate;

@interface MKTransitSystemFilterView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSLayoutConstraint *_heightConstraint;
    double _cachedHeight;
}

@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) NSArray *transitSystems;
@property (weak, nonatomic) id<MKTransitSystemFilterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_setupConstraints;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_updateAppearance;
- (void)_setupCollectionView;
- (void)_updateSegmentPosition;

@end
