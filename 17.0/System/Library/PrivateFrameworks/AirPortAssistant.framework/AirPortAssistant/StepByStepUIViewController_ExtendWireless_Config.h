@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    BOOL isReallyJoin;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateNavigationButtons;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(BOOL)a0;
- (void)selectedDeviceUpdated;
- (void)setupAndShowEditableBaseStationName;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)validateAndUpdateNextButton;

@end
