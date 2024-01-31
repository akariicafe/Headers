@class NSLayoutConstraint, UIView;

@interface PRXPullDismissalScrollView : UIScrollView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutFrame;
    NSLayoutConstraint *_contentHeightConstraint;
    BOOL _hasDimissed;
}

@property (nonatomic) BOOL allowsPullToDismiss;
@property (readonly, nonatomic) double dismissalPercent;
@property (readonly, nonatomic) UIView *dismissableContentContainerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
