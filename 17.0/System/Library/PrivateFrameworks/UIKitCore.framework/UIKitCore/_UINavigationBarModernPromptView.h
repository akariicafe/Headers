@class NSString, UIColor, UILabel;

@interface _UINavigationBarModernPromptView : UIView <_UINavigationBarLayoutParticipating> {
    UILabel *_promptLabel;
}

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) UIColor *textColor;

- (void)updateLayoutData:(id)a0 layoutWidth:(double)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updatePromptLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
