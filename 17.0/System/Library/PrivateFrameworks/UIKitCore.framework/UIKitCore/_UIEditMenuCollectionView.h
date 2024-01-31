@class NSArray;

@interface _UIEditMenuCollectionView : UICollectionView

@property (retain, nonatomic) NSArray *pages;
@property (readonly, nonatomic) double currentPage;
@property (nonatomic) long long targetPage;

- (void).cxx_destruct;
- (void)resetTargetPage;
- (void)_prepareToPageWithHorizontalVelocity:(double)a0 verticalVelocity:(double)a1;
- (double)clampedPageForPageProgress:(double)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForPage:(long long)a0;
- (void)decrementTargetPage;
- (void)incrementTargetPage;
- (double)pageProgressForContentOffset:(struct CGPoint { double x0; double x1; })a0 clamped:(BOOL)a1;
- (void)scrollToTargetPageAnimated:(BOOL)a0;
- (double)viewWidthForPageProgress:(double)a0;

@end
