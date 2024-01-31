@interface MagnifierSupport.ActivityPointSpeakCustomizationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ availablePointSpeakFeedbacks;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ colorPickerController;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)didToggleFeedbackSwitch:(id)a0;
- (void)didToggleFlashlightSwitch:(id)a0;
- (void)didToggleOutlineSwitch:(id)a0;
- (void)togglePointSpeakSwitchChanged:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
