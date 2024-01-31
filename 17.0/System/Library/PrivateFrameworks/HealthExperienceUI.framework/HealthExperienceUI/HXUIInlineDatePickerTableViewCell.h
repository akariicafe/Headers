@class NSString, UIDatePicker, HXUIPickerLabelView;

@interface HXUIInlineDatePickerTableViewCell : UITableViewCell <HXUIExpandableTableViewCell> {
    HXUIPickerLabelView *_contentLabel;
    UIDatePicker *_picker;
}

@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (readonly, nonatomic) double expandedHeight;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEditing;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setDisplayName:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pickerFrame;
- (struct CGSize { double x0; double x1; })contentLabelHeightForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTitle:(id)a0 datePickerMode:(long long)a1 maxDate:(id)a2;
- (void)updateLabelWithDate:(id)a0;

@end
