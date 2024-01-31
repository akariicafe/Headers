@class PKPeerPaymentAssociatedAccountInformation;

@interface PKPeerPaymentAddAssociatedAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
