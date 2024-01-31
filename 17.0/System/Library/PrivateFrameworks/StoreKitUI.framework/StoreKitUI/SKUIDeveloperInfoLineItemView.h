@class UILabel, UIView;

@interface SKUIDeveloperInfoLineItemView : UIView {
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

- (void)setBackgroundColor:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
