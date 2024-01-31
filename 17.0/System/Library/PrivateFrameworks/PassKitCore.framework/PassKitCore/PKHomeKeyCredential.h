@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    BOOL _detailDescriptionAvailable;
}

- (id)paymentApplications;
- (id)detailDescription;
- (id)initWithPaymentPass:(id)a0;
- (BOOL)supportsSuperEasyProvisioning;

@end
