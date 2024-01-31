@class NSArray, UICollectionView, NSString, NSIndexPath;
@protocol TUIPressAndHoldGridDelegate;

@interface TUIPressAndHoldGrid : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) NSArray *accentVariants;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly, nonatomic) NSString *selectedAccentVariant;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) id<TUIPressAndHoldGridDelegate> delegate;
@property (readonly, nonatomic) NSIndexPath *firstIndexPath;
@property (readonly, nonatomic) NSIndexPath *lastIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)handleNumberKey:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)handleSelection;
- (BOOL)hasAccentVariantInForwardDirection:(BOOL)a0;
- (void)setSelectedIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (id)showAccentVariantInForwardDirection:(BOOL)a0;
- (id)accentAtIndexPath:(id)a0;
- (unsigned long long)accentVariantNumberForIndexPath:(id)a0;
- (void)forceUpdateVisibleCells;
- (id)indexPathForAccentVariantNumber:(unsigned long long)a0;
- (id)indexPathInForwardDirection:(BOOL)a0;
- (BOOL)indexPathIsValid:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 accentVariants:(id)a1;
- (id)visibleAttributes;

@end
