@class PKPaymentDeviceMetadata, NSString, PKAccountTransferScheduleDetails, NSURL, NSData, PKAccountScheduledTransferList, PKApplePayTrustHashResponse;

@interface PKAccountWebServiceScheduleTransferRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>

@property (retain, nonatomic) PKAccountScheduledTransferList *scheduledTransfers;
@property (retain, nonatomic) PKAccountTransferScheduleDetails *scheduleDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *odiAssessment;
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
