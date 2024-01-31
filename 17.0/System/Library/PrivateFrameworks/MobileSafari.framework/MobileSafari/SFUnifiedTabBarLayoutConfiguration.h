@class UIScrollView, SFUnifiedTabBarMetrics;

@interface SFUnifiedTabBarLayoutConfiguration : NSObject

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SFUnifiedTabBarMetrics *barMetrics;
@property (nonatomic) struct CGPoint { double x; double y; } midpointForCenteredContent;
@property (nonatomic, getter=isStandalone) BOOL standalone;
@property (nonatomic) BOOL flipped;
@property (nonatomic) BOOL shouldSlideInNewTrailingTab;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRectOverride;

- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;

@end
