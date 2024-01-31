@class NSString;

@interface PSGDeviceNameEditingController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (retain, nonatomic) NSString *originalDeviceName;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)suspend;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)deviceName:(id)a0;
- (id)_editedDeviceName;

@end
