@class UIButton, UILabel;

@interface CKMessageEntryHintView : UIView

@property (retain, nonatomic) UIButton *referenceButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } coverInsets;
@property (retain, nonatomic) UILabel *hintLabel;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithReferenceButton:(id)a0 coverInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
