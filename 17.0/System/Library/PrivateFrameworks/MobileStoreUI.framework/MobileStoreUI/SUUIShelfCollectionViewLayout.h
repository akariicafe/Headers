@class NSString, SUUIShelfLayoutData;

@interface SUUIShelfCollectionViewLayout : UICollectionViewLayout <SUUIShelfCollectionViewLayout>

@property (retain, nonatomic) SUUIShelfLayoutData *layoutData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layoutAttributesClass;
+ (BOOL)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
