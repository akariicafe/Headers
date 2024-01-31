@class NSArray, TUNavigationBarCompressibleTitleView, TUAnimationFloatFunction, UINavigationBar;

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>

@property (retain, nonatomic) TUNavigationBarCompressibleTitleView *compressibleTitleView;
@property (retain, nonatomic) NSArray *barButtonItemViews;
@property (readonly, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) TUAnimationFloatFunction *opacityFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *scaleFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *translateFunction;
@property (nonatomic) BOOL compressTitleView;
@property (nonatomic) BOOL hideTitleOnTop;
@property (readonly, nonatomic) BOOL shouldCompressAtTop;
@property (readonly, nonatomic) double topOffset;
@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll;

- (double)maximumBarHeightForTraitCollection:(id)a0;
- (id)initWithNavigationBar:(id)a0;
- (void)updateWithPercentage:(double)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;
- (void)prepareForUpdates;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;

@end
