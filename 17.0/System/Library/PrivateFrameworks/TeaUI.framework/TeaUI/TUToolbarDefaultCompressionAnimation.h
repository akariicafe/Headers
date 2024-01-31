@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>

@property (retain, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) BOOL shouldCompressAtTop;
@property (readonly, nonatomic) double topOffset;
@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll;

- (double)maximumBarHeightForTraitCollection:(id)a0;
- (void)updateWithPercentage:(double)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;
- (void)prepareForUpdates;
- (id)initWithToolbar:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;

@end
