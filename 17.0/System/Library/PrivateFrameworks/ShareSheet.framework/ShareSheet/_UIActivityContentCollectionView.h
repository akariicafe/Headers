@interface _UIActivityContentCollectionView : UICollectionView

@property (nonatomic) BOOL initialValidLayoutWasCalled;
@property (nonatomic) BOOL isInitialLayoutPass;

- (void)removeFromSuperview;
- (void)layoutSubviews;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;

@end
