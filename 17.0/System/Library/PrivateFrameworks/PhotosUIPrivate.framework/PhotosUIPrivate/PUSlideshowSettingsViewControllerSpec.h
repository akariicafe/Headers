@class UIColor, UIView;

@interface PUSlideshowSettingsViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) BOOL shouldShowNavigationBar;
@property (readonly, nonatomic) BOOL shouldUseBlurredBackground;
@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) UIColor *tableViewBackgroundColor;
@property (readonly, nonatomic) UIView *tableViewHeaderView;
@property (readonly, nonatomic) unsigned long long rectEdgeForExtendedLayout;

- (id)newSpecChange;
- (id)currentChange;

@end
