@class NSString;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    unsigned int productID;
    int deviceKind;
    BOOL supportsSpruce;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateNavigationButtons;
- (BOOL)showMoreOptions;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)prepareParams;
- (void)primaryActionSelected:(BOOL)a0;
- (void)selectedDeviceUpdated;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (void)setupTable;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (BOOL)shouldEnableNextButton;
- (void)syncTopoUIForTarget:(id)a0 andSource:(id)a1 andNetwork:(id)a2 connectionType:(id)a3;
- (void)textFieldDidChangeAtIndexPath:(id)a0;
- (void)validateAndUpdateNextButton;

@end
