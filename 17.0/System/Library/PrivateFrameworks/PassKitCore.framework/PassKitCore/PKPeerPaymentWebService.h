@class NSString, NSURL, PKSecureElement, PKPeerPaymentWebServiceContext, NSMutableDictionary, NSObject, PKPeerPaymentService, PKPaymentDevice;
@protocol PKPeerPaymentWebServiceTargetDeviceProtocol, OS_dispatch_queue, PKPeerPaymentWebServiceArchiver;

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate> {
    PKSecureElement *_secureElement;
    NSMutableDictionary *_prewarmedDeviceScorers;
    NSObject<OS_dispatch_queue> *_prewarmedDeviceScorersQueue;
    PKPaymentDevice *_paymentDevice;
}

@property (nonatomic, getter=isSharedService) BOOL sharedService;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (retain, nonatomic) PKPeerPaymentWebServiceContext *context;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) id<PKPeerPaymentWebServiceArchiver> archiver;
@property (readonly, nonatomic) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (id)_appleAccountInformation;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 tapToRadarDelegate:(id)a2;
- (BOOL)_isValidResponse:(id)a0 error:(id)a1;
- (void)_renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)_deviceRegistrationDataWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 archiver:(id)a2;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 archiver:(id)a2 tapToRadarDelegate:(id)a3;
- (void)_archiveContext;
- (unsigned long long)peerPaymentPreferencesWithCompletion:(id /* block */)a0;
- (long long)logFacilityType;
- (unsigned long long)peerPaymentRemoveAssociatedAccountWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)canBypassTrustValidation;
- (unsigned long long)peerPaymentStatusWithPaymentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)a0 originalRequest:(id)a1 redirectHandler:(id /* block */)a2;
- (unsigned long long)peerPaymentPerformAction:(id)a0 withPaymentIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)performRequest:(id)a0 taskIdentifier:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)handleAuthenticationFailureWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)peerPaymentPendingRequestPerformAction:(id)a0 withRequestToken:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)peerPaymentRequestStatementForAccountIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)peerPaymentAssociatedAccountsWithCompletion:(id /* block */)a0;
- (id)forbiddenErrorWithResponse:(id)a0;
- (unsigned long long)peerPaymentEmailTermsWithCompletion:(id /* block */)a0;
- (unsigned long long)peerPaymentRecipientForRecipientAddress:(id)a0 senderAddress:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_provideDeviceScoreFeedbackIfNeededForEndpoint:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2 ingested:(BOOL)a3;
- (unsigned long long)peerPaymentIdentityVerificationRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleResponse:(id)a0 withError:(id)a1 data:(id)a2 task:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithTapToRadarDelegate:(id)a0;
- (unsigned long long)peerPaymentAddAssociatedAccountWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 targetDevice:(id)a1;
- (unsigned long long)peerPaymentBankLookupWithCountryCode:(id)a0 query:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)peerPaymentRecurringPaymentsForAccountIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)peerPaymentUnregisterWithCompletion:(id /* block */)a0;
- (unsigned long long)peerPaymentQuoteCertificatesForDestination:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)peerPaymentAccountWithCompletion:(id /* block */)a0;
- (void)_deviceScoreForEndpoint:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (unsigned long long)peerPaymentPassDetailsWithCompletion:(id /* block */)a0;
- (unsigned long long)peerPaymentUpdatePreferencesWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)submitDeviceScoreIdentifiersWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_createDeviceScorerForEndpoint:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2;
- (unsigned long long)peerPaymentPerformQuoteWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)peerPaymentAcceptTermsWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)peerPaymentDocumentSubmissionRequest:(id)a0 completion:(id /* block */)a1;
- (void)prewarmDeviceScoreForEndpoint:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2;
- (id)_deviceIdentifier;
- (void)updateDeviceScorersWithEncryptedPayloadVersion:(unsigned long long)a0;
- (void)unloadDeviceScoreForEndpoint:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2;
- (void)_handleRetryAfterRegisterWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)peerPaymentQuoteWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)peerPaymentAssociatedAccountActionWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)peerPaymentRecurringPaymentPerformAction:(unsigned long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)peerPaymentReOpenAccountWithCompletion:(id /* block */)a0;
- (unsigned long long)peerPaymentRegisterWithURL:(id)a0 pushToken:(id)a1 completion:(id /* block */)a2;
- (id)badRequestErrorWithResponse:(id)a0;
- (void)_updateRequestWithCurrentTargetDevice:(id)a0;
- (void)_peerPaymentDeviceMetadataWithCompletion:(id /* block */)a0;
- (unsigned long long)peerPaymentRequestTokenWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)peerPaymentPendingRequestsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)sharedPeerPaymentServiceChanged:(id)a0;

@end
