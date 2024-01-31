@class NSString;

@interface PKPeerPaymentAddAssociatedAccountRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long role;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
