@class UIImageView, UIView;

@interface NCCheckmarkButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_checkmarkImageView;
}

+ (id)button;

- (id)_init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;

@end
