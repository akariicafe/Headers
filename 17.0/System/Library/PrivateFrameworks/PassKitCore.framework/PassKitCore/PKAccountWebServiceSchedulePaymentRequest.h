@class NSData, NSString, NSURL, PKAccountPaymentScheduleDetails, PKPaymentDeviceMetadata, PKApplePayTrustHashResponse, PKAccountWebServiceCertificatesResponse, PKAccountScheduledPaymentList;

@interface PKAccountWebServiceSchedulePaymentRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>

@property (retain, nonatomic) PKAccountScheduledPaymentList *scheduledPayments;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;
- (id)endpointComponents;
- (id)manifestHashWithReferenceIdentifier:(id)a0;
- (Class)signatureResponseClass;

@end
