@class UIColor;

@interface SeymourUI.AccountButton : UIControl {
    void /* unknown type, empty encoding */ onLongPressed;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ highlightView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ avatarViewController;
    void /* unknown type, empty encoding */ highlightTask;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)longPressWithGesture:(id)a0;
- (void)tappedDown;
- (void)tappedUp;

@end
