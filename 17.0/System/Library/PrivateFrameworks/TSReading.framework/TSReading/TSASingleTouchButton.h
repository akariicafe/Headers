@class UIImage;

@interface TSASingleTouchButton : UIButton

@property (nonatomic) BOOL showsTouchOnTopWhenHighlighted;
@property (retain, nonatomic) UIImage *touchImage;

- (void)dealloc;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)_pressFeedbackImage;
- (struct CGPoint { double x0; double x1; })_pressFeedbackPosition;

@end
