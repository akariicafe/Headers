@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int currentLabelCompressionLevel;

- (id)accessibilityHUDRepresentation;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void).cxx_destruct;
- (BOOL)_shouldLayoutImageOnRight;
- (double)addContentOverlap:(double)a0;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (long long)labelLineBreakMode;
- (BOOL)layoutImageOnTrailingEdge;
- (double)resetContentOverlap;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (double)updateContentsAndWidth;
- (void)userDidActivateButton:(id)a0;

@end
