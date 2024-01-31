@class UIView;

@interface _SBUISystemApertureTextContainerView : UIView {
    UIView *_contentLabel;
    struct CGSize { double width; double height; } _transitionSize;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
