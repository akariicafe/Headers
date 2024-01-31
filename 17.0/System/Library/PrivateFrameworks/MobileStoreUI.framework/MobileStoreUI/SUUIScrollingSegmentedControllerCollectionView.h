@protocol SUUIScrollingSegmentedControllerCollectionViewDelegate;

@interface SUUIScrollingSegmentedControllerCollectionView : SUUIViewControllerContainerCollectionView

@property (nonatomic) id<SUUIScrollingSegmentedControllerCollectionViewDelegate> delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout;

- (void)layoutSubviews;

@end
