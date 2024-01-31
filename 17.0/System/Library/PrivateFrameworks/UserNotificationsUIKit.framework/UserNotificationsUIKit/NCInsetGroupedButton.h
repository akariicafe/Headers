@class UIImageView, UILabel, UIView;

@interface NCInsetGroupedButton : UIControl {
    UIView *_backgroundView;
    UIView *_cornersView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)buttonWithTitle:(id)a0 top:(BOOL)a1;

- (void)setSubtitleText:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)_initWithTitle:(id)a0 top:(BOOL)a1;

@end
