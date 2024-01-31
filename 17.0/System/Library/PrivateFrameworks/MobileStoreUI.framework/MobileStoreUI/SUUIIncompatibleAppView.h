@class NSString, UIImageView, UIImage, UILabel, NSMutableArray;

@interface SUUIIncompatibleAppView : UIView {
    NSMutableArray *_buttons;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)addButtonWithTitle:(id)a0;
- (void)removeButtonTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
