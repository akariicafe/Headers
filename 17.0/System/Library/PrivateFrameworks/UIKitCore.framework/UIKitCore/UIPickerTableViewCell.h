@class UITapGestureRecognizer, _UIPickerViewStyle, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) _UIPickerViewStyle *style;
@property (nonatomic) UIPickerTableView *pickerTable;

- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void).cxx_destruct;
- (void)_tapAction:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
