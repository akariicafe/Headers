@class UITextView, EMKTextEnumerator, EMKGlyphRippler, NSMutableArray;

@interface _EMKTextContainerOverlayView : UIView

@property (retain, nonatomic) EMKTextEnumerator *textEnumerator;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSMutableArray *fragmentViews;
@property (retain, nonatomic) EMKGlyphRippler *rippler;
@property (nonatomic) unsigned long long timeIndex;

- (BOOL)isOpaque;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutFragmentView:(id)a0;
- (id)_newFragmentViewForFragment:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rippler:(id)a1;
- (void)prepareWithTextView:(id)a0;
- (void)updateAnimationAndGetFinished:(BOOL *)a0;

@end
