@interface StepByStepUIViewController_ReplaceNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>

- (void)updateNavigationButtons;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)prepareParams;
- (void)setupDevices;
- (void)setupHeaderAndFooter;

@end
