@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (unsigned long long)hash;
- (id)initWithAccount:(id)a0;
- (id)longDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (BOOL)supportsSuperEasyProvisioning;

@end
