@class UIView;

@interface _UIUCBKBSelectionBackground : UIView {
    UIView *_backgroundProvidingView;
}

@property (nonatomic) BOOL showButtonShape;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBackgroundProvidingView;

@end
