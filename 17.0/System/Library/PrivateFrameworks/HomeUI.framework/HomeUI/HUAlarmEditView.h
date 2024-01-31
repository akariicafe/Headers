@class UIDatePicker, UITableView;

@interface HUAlarmEditView : UIView

@property (nonatomic) BOOL accessorySupportsMusicAlarm;
@property (readonly, nonatomic) UITableView *settingsTable;
@property (readonly, nonatomic) UIDatePicker *timePicker;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 supportsMusicAlarm:(BOOL)a1;

@end
