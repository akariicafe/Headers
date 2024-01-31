@class UIImageView, UILabel, NSString;

@interface DMCEnrollmentLinkLabelView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ linkHandler;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *linkMessage;
@property (nonatomic) BOOL enabled;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_textFont;
- (void)_populateTextLabelWithMessage:(id)a0 linkMessage:(id)a1;
- (id)initWithIcon:(id)a0 message:(id)a1 linkMessage:(id)a2 linkHandler:(id /* block */)a3;

@end
