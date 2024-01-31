@class SUGradientButton;

@interface SUButtonAccessoryView : UIView {
    SUGradientButton *_button;
}

@property (readonly, nonatomic) SUGradientButton *button;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithDefaultSize;

@end
