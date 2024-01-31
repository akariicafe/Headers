@interface FIUIHealthSettingsDatePicker : UIDatePicker

@property (copy, nonatomic) id /* block */ dateUpdateHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)forceUpdate;
- (void)layoutSubviews;
- (void)_dateDidChange:(id)a0;

@end
