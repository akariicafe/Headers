@class HUTimerIntervalPickerView, NSString, UITextField, HMRoom;
@protocol HUTimerCreationDelegate, HFMediaProfileContainer;

@interface HUTimerCreationViewController : UITableViewController <UITextFieldDelegate, HUTimerIntervalPickerViewDelegate, HUAlarmEditSettingViewControllerDelegate>

@property (retain, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) HUTimerIntervalPickerView *timePickerView;
@property (retain, nonatomic) UITextField *nameField;
@property (copy, nonatomic) NSString *timerTitle;
@property (nonatomic) double timerDuration;
@property (retain, nonatomic) HMRoom *selectedRoom;
@property (weak, nonatomic) id<HUTimerCreationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)a0;
- (void)alarmEditSettingController:(id)a0 didEditAlarm:(id)a1;
- (void)cancelTimerCreation:(id)a0;
- (void)createTimer:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;
- (void)pickerView:(id)a0 didChangeSelectedDuration:(double)a1;

@end
