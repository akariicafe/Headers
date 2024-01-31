@class NSMutableDictionary, UIView, UIScrollView, UIViewController;
@protocol _UIContentViewInternal, UIContentConfiguration;

@interface _UIContentUnavailableWrapperView : UIView {
    UIView *_backgroundView;
    id<_UIContentViewInternal> _viewForConfiguration;
    NSMutableDictionary *_parentScrollViews;
    UIScrollView *_contentScrollView;
    BOOL _isConfiguringContentScrollView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly, weak, nonatomic) UIViewController *viewController;

- (void)_updateBackgroundView;
- (id)initWithViewController:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (void)removeFromSuperview;
- (void)reconfigureContentScrollView;
- (void)_updateBackgroundViewHandlersForPreviousContentView:(id)a0 newContentView:(id)a1;
- (id)_contentScrollViewForView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateContentView:(id)a0;
- (BOOL)_canApplyConfigurationToExistingContentView:(id)a0;

@end
