@class UISplitViewController, UIColor;

@interface _UISplitViewControllerStyle : NSObject <_UIVisualStyleProviding>

@property (readonly, weak, nonatomic) UISplitViewController *splitViewController;
@property (readonly, nonatomic) UIColor *primaryBackgroundColor;
@property (readonly, nonatomic) BOOL alwaysHideSidebarToggleButton;
@property (readonly, nonatomic) double maximumRubberbandingDistance;

- (id)initWithSplitViewController:(id)a0;
- (long long)splitBehaviorForSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)defaultMaximumWidthForColumn:(long long)a0 withSize:(struct CGSize { double x0; double x1; })a1 splitBehavior:(long long)a2;

@end
