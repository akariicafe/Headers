@interface PassKitUI.ProvisioningManualEntryViewController : PKPaymentSetupFieldsViewController <PKProvisioningFieldsUIRenderer> {
    void /* unknown type, empty encoding */ provisioningContext;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ isSecondaryEntry;
}

- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (void)fieldCellEditableTextFieldValueDidChange:(id)a0;
- (void)handleNextButtonTapped:(id)a0;
- (void)showWithProvisioningError:(id)a0;
- (id)visibleFieldIdentifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWebService:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;

@end
