@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    UILabel *justTextLabel2;
}

@property (retain, nonatomic) UIView *justTextContainerView2;
@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void)updateNavigationButtons;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)prepareParams;
- (void)primaryActionSelected:(BOOL)a0;
- (void)selectedDeviceUpdated;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)validateAndUpdateNextButton;

@end
