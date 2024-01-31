@class NSString, WDProfile;

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController <UITextViewDelegate, HKSwitchTableViewCellDelegate>

@property (retain, nonatomic) WDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (id)sectionsForAuthController:(id)a0;
- (BOOL)_isSiriAndDeviceCapable;
- (BOOL)_isTypeEnabledAtIndexPath;
- (id)initWithProfile:(id)a0 style:(long long)a1;
- (id)specialCellWithIdentifier:(id)a0 textLabelText:(id)a1;

@end
