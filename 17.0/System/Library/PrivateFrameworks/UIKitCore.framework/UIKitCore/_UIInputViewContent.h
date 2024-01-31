@class UIInputView;

@interface _UIInputViewContent : UIView {
    double _contentHeight;
    double _contentWidth;
    UIInputView *_inputView;
}

@property (nonatomic) unsigned long long _unclippableCorners;

- (struct CGSize { double x0; double x1; })_contentSize;
- (void)addSubview:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isToolbar;
- (void)_setToolbarBackgroundImage:(id)a0;
- (void)_setToolbarBackgroundViewWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeFittingContentViews;
- (void)_updateCornerClipping;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputView:(id)a1;

@end
