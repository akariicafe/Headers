@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    int _selectorChoice;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)updateNavigationButtons;
- (void)addBrowsedRecords:(id)a0 toDestList:(id)a1;
- (BOOL)canBeExtendedWithDWDS;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)selectedDeviceUpdated;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (void)stepByStepUpdateProgress:(id)a0 forState:(int)a1;
- (void)touchInCellAtIndexPath:(id)a0;

@end
