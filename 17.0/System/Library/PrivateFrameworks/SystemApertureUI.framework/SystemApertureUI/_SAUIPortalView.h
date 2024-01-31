@class UIView;

@interface _SAUIPortalView : UIView

@property (retain, nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)portalLayer;
- (void)didMoveToWindow;
- (void)_configurePortalViewIfNeeded;

@end
