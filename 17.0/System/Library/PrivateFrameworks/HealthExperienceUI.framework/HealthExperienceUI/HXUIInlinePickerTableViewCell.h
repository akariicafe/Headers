@class NSString, UIPickerView, HXUIPickerLabelView;

@interface HXUIInlinePickerTableViewCell : UITableViewCell <HXUIExpandableTableViewCell> {
    HXUIPickerLabelView *_contentLabel;
    UIPickerView *_picker;
}

@property (readonly, nonatomic) UIPickerView *pickerView;
@property (readonly, nonatomic) double expandedHeight;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEditing;
- (id)initWithTitle:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setDisplayName:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pickerFrame;
- (struct CGSize { double x0; double x1; })contentLabelHeightForBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
