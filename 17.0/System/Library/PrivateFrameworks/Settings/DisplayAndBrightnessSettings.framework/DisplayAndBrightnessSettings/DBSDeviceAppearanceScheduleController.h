@class NSDateFormatter, PSSpecifier, UISUserInterfaceStyleMode, UIDatePicker;

@interface DBSDeviceAppearanceScheduleController : PSListController <PSDateTimePickerCellDelegate>

@property (retain, nonatomic) PSSpecifier *_radioGroup;
@property (retain, nonatomic) PSSpecifier *_timeGroup;
@property (retain, nonatomic) PSSpecifier *_lightAppearanceTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *_darkAppearanceTimePickerSpecifier;
@property (nonatomic) BOOL _showingScheduleSpecifiers;
@property (weak, nonatomic) UISUserInterfaceStyleMode *_styleMode;
@property (retain, nonatomic) NSDateFormatter *_timeFormatter;
@property (retain, nonatomic) UIDatePicker *_lightAppearanceTimePicker;
@property (retain, nonatomic) UIDatePicker *_darkAppearanceTimePicker;

- (void)willResignActive;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (id)_darkAppearanceTimeString;
- (id)_lightAppearanceTimeString;
- (void)showScheduleSpecifiers:(BOOL)a0 animated:(BOOL)a1;

@end
