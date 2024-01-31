@interface PassKitUI.ProvisioningAddPaymentPassViewController : PKPaymentSetupFieldsViewController <PKProvisioningFieldsUIRenderer> {
    void /* unknown type, empty encoding */ provisioningContext;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ hasMultipleDestinationDevices;
    void /* unknown type, empty encoding */ privacyController;
    void /* unknown type, empty encoding */ coordinator;
}

- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (void)handleNextButtonTapped:(id)a0;
- (void)showWithProvisioningError:(id)a0;
- (id)visibleFieldIdentifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCoder:(id)a0;
- (id)initWithWebService:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;

@end
