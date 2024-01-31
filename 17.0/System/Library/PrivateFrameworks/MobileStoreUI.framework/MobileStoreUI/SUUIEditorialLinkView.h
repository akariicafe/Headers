@class SUUIEditorialLinkLayout, NSMutableArray, UIColor;
@protocol SUUIEditorialLinkViewDelegate;

@interface SUUIEditorialLinkView : UIView {
    NSMutableArray *_buttons;
    UIColor *_highlightedTextColor;
    UIColor *_textColor;
}

@property (weak, nonatomic) id<SUUIEditorialLinkViewDelegate> delegate;
@property (nonatomic) long long horizontalAlignment;
@property (retain, nonatomic) SUUIEditorialLinkLayout *linkLayout;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_linkButtonAction:(id)a0;
- (id)_newButton;
- (void)setColoringWithColorScheme:(id)a0;

@end
