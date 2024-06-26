@class NSDecimalNumber, PKPaymentCredential, PKServiceProviderPurchase, NSString, PKAppleBalanceCredential, PKPaymentAuthorizationController, NPKPaymentProvisioningFlowControllerPreconditionsStepContext, PKPaymentPass, PKAddPaymentPassRequestConfiguration, PKPaymentSetupProduct, PKPaymentRequest, NPKPaymentProvisioningFlowControllerRequestContext, NSObject, NSData, PKAddPaymentPassRequest, PKPaymentSetupFieldsModel, PKPaymentProvisioningController, NPKFidoAuthCoordinator, PKPaymentProvisioningMethodMetadata, PKContactlessCardIngester, PKPaymentWebService;
@protocol OS_dispatch_source, NPKPaymentProvisioningFlowControllerDelegate, NSObject;

@interface NPKPaymentProvisioningFlowController : NSObject <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, PKContactlessCardIngesterDelegate, NPKPaymentProvisioningFlowControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *inAppProvisioningRequestConfiguration;
@property (retain, nonatomic) PKAddPaymentPassRequest *inAppProvisioningRequest;
@property (retain, nonatomic) NSData *inAppProvisioningPublicKeyHash;
@property (retain, nonatomic) NSData *inAppProvisioningNonce;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *inAppProvisioningGetRequestTimer;
@property (retain, nonatomic) NPKFidoAuthCoordinator *fidoAuthCoordinator;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) int currentStep;
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerPreconditionsStepContext *preconditionsRequestContext;
@property (retain, nonatomic) NSString *chooseCredentialsStepIdentifier;
@property (retain, nonatomic) NSString *immediatelyBeforeTermsStepIdentifier;
@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel;
@property (retain, nonatomic) id<NSObject> progressNotificationToken;
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *provisioningProgressRequestContext;
@property (retain, nonatomic) PKPaymentPass *issuerVerificationPass;
@property (retain, nonatomic) PKPaymentCredential *currentCredential;
@property (retain, nonatomic) PKAppleBalanceCredential *currentAppleBalanceCredential;
@property (retain, nonatomic) PKPaymentSetupProduct *currentProduct;
@property (nonatomic) unsigned long long termsReason;
@property (nonatomic) BOOL termsAcceptedOutOfBand;
@property (retain, nonatomic) PKPaymentRequest *digitalIssuancePaymentRequest;
@property (retain, nonatomic) NSDecimalNumber *digitalIssuanceAmount;
@property (retain, nonatomic) PKServiceProviderPurchase *digitalIssuancePurchase;
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuanceAmountRequestContext;
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuancePaymentRequestContext;
@property (retain, nonatomic) PKPaymentAuthorizationController *authorizationController;
@property (retain, nonatomic) PKContactlessCardIngester *cardIngester;
@property (nonatomic) unsigned long long internalIngestionState;
@property (nonatomic) unsigned long long flowIngestionState;
@property (nonatomic) double ingestionProgress;
@property (nonatomic) unsigned long long ingestionStateOnRetry;
@property (retain, nonatomic) NSString *ingestionCardSessionToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *ingestionCardNotFoundTimer;
@property (retain, nonatomic) PKPaymentProvisioningMethodMetadata *ingestionMethodMetadata;
@property (retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *readerModeRequestContext;
@property (weak, nonatomic) id<NPKPaymentProvisioningFlowControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) long long setupContext;
@property (nonatomic, getter=isReaderModeProvisioningSupported) BOOL readerModeProvisioningSupported;
@property (nonatomic, getter=isDigitalIssuanceSupported) BOOL digitalIssuanceSupported;
@property (nonatomic, getter=isSeparateLocalDeviceEntryRequired) BOOL separateLocalDeviceEntryRequired;
@property (retain, nonatomic) PKPaymentAuthorizationController *unitTestingAuthorizationController;
@property (retain, nonatomic) PKContactlessCardIngester *unitTestingCardIngester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isHSA2Enabled;
+ (id)_readerModeResources;
+ (id)_authContext;
+ (BOOL)_localCredentials:(id)a0 containProduct:(id)a1;
+ (void)_addGroupedItemsToSections:(id)a0 fromModel:(id)a1 webService:(id)a2 paymentSection:(id /* block */)a3;
+ (void)_addAppleBalanceToSections:(id)a0 fromModel:(id)a1;
+ (void)_addCreditDebitItemToSection:(id /* block */)a0 webService:(id)a1;
+ (id)_displayableCouldNotAddCardErrorWithUnderlyingError:(id)a0;
+ (id)_displayableErrorWithIneligibilityReason:(long long)a0 learnMoreURL:(id)a1;
+ (id)_displayableErrorWithUnderlyingVerificationError:(id)a0;
+ (id)_filterAssociatedCredentials:(id)a0 forProduct:(id)a1;
+ (id)_filteredPaymentSetupProducts:(id)a0 localCredentials:(id)a1 setupContext:(long long)a2 webService:(id)a3 mobileCarrierRegion:(id)a4 readerModeSupported:(BOOL)a5 digitalIssuanceSupported:(BOOL)a6;
+ (id)_flowPickerSectionsWithContext:(long long)a0 provisioningController:(id)a1 readerModeSupported:(BOOL)a2 digitalIssuanceSupported:(BOOL)a3;
+ (id)_physicalCardURLFromMetadata:(id)a0 forScale:(double)a1;
+ (id)_productsArrayFromPickerSection:(id)a0;
+ (BOOL)_readerModeEntryAllowedForProduct:(id)a0;

- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_titleForState:(unsigned long long)a0;
- (id)_subtitleForState:(unsigned long long)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)contactlessCardIngester:(id)a0 didFailToIngestCardWithError:(id)a1 resetProvisioning:(BOOL)a2 isRecoverable:(BOOL)a3;
- (void)contactlessCardIngester:(id)a0 didUpdateCardIngestionStatus:(unsigned long long)a1;
- (void)_startIngestion;
- (void)_invalidateCardNotFoundTimer;
- (void)_setupCardIngester;
- (void)_startCardNotFoundTimer;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (void)_tearDownCardIngester;
- (id)_addCardErrorForPaymentRequest:(id)a0;
- (void)_handleProvisioningFlowStarted:(id)a0;
- (void)prefetchCredentialsForProduct:(id)a0 requestContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handlePasscodeUpgradeCompleteWithSuccess:(BOOL)a0 error:(id)a1 requestContext:(id)a2;
- (void)_handleReaderModeTermsAccepted:(id)a0;
- (void)_transitionToIngestionProgress:(double)a0;
- (void)chooseCardsOnFileFlowForProduct:(id)a0 requestContext:(id)a1 preloadMetadata:(BOOL)a2;
- (void)_canMakeDigitalIssuancePaymentsForTransitProducts:(id)a0 withCompletion:(id /* block */)a1;
- (void)_canMakeDigitalIssuancePaymentsForTransitProductsWithCompletion:(id /* block */)a0;
- (void)_cardNotFoundTimerFired;
- (void)_cardsOnFileForProduct:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_chooseProductFromFlowPickerSection:(id)a0 requestContext:(id)a1 transitioningToStep:(int)a2;
- (void)_configureWebServiceIfNecessary:(id)a0 completion:(id /* block */)a1;
- (id)_credentialReadonlyFieldIdentifiers;
- (id)_curatedDefaultPaymentSetupProvisioningFields;
- (void)_downloadAndAddUpdatedPassForPaymentPass:(id)a0 completion:(id /* block */)a1;
- (void)_downloadRemoteAssetsAndAddPaymentPass:(id)a0 completion:(id /* block */)a1;
- (void)_endProvisioningFlowWithError:(id)a0 requestContext:(id)a1;
- (void)_endProvisioningFlowWithSuccessForPass:(id)a0 requestContext:(id)a1;
- (void)_ensureMetadataForCredentials:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_fetchAddRequestWithCertificatesResponse:(id)a0 requestContext:(id)a1;
- (void)_fetchInAppProvisioningCertificates:(id)a0;
- (BOOL)_fieldRequiresLocalEntry:(id)a0;
- (BOOL)_fieldsModelCompleteExceptForLocalFields:(id)a0;
- (id)_filteredPaymentSetupFields:(id)a0 forLocalDeviceEntry:(BOOL)a1;
- (void)_handleAppleBalanceAccountDetailsAcknowledgedWithProduct:(id)a0 requestContext:(id)a1;
- (void)_handleAppleBalanceProductChosen:(id)a0 requestContext:(id)a1;
- (void)_handleDigitalIssuanceTermsAccepted:(id)a0;
- (void)_handleEndOfProvisioningFlowForCurrentPass:(id)a0 requestContext:(id)a1;
- (void)_handleFinished:(id)a0;
- (void)_handlePreconditionsVerified:(id)a0;
- (void)_handleProceedWithCredentials:(id)a0 chosenByUser:(BOOL)a1 requestContext:(id)a2;
- (void)_handleProductChosen:(id)a0 includeCardsOnFile:(BOOL)a1 requestContext:(id)a2;
- (void)_handleVerificationCode:(id)a0 forPass:(id)a1 context:(id)a2;
- (void)_handleVerificationFieldsForPass:(id)a0 context:(id)a1;
- (void)_handleVerificationResponseForPass:(id)a0 context:(id)a1;
- (BOOL)_isPasscodeUpgradeRequired;
- (BOOL)_isResolveLocalEligibilityRequired;
- (BOOL)_isValidateSecurityRequirementsRequired;
- (id)_localRequiredFieldsFromRequirementsResponse;
- (id)_newPaymentEligibilityRequest;
- (id)_newPaymentProvisioningRequest;
- (id)_newPaymentRequirementsRequest;
- (void)_noteProvisioningStateChangeForReaderMode:(long long)a0;
- (id)_paymentRequestForAmount:(id)a0;
- (id)_paymentRequestForAmount:(id)a0 serviceProviderProduct:(id)a1 productItem:(id)a2;
- (void)_performEligibility:(id)a0;
- (void)_performNextActionForProvisioningState:(id)a0;
- (void)_performNextStepForProvisionedPass:(id)a0 moreInfoAcknowledged:(BOOL)a1 requestContext:(id)a2;
- (void)_performNextStepForProvisionedPass:(id)a0 requestContext:(id)a1;
- (void)_performPasscodeUpgrade:(id)a0;
- (void)_performProvision:(id)a0;
- (void)_performProvisionWithRequest:(id)a0 requestContext:(id)a1 assertion:(id)a2;
- (void)_performProvisioningEligibility:(id)a0;
- (void)_performRequirementsOrEligibilityForInAppProvisioning:(id)a0;
- (void)_performResolveLocalEligibilityARequirements:(id)a0 completion:(id /* block */)a1;
- (void)_performTerms:(id)a0;
- (void)_performTransitionToStep:(int)a0 withContext:(id)a1;
- (void)_performValidateSecurityRequirements:(id)a0 completion:(id /* block */)a1;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)a0;
- (void)_removePassIfNecessary;
- (void)_requestPassDetailsForAccountCredential:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_requestRequirements:(id)a0;
- (void)_requestVerificationOptionsForPass:(id)a0 context:(id)a1;
- (id)_requiredFieldsFromRequirementsResponse;
- (id)_requiredFieldsFromRequirementsResponseExcludingLocalFields;
- (void)_resetReaderModeProvisioningState;
- (id)_secondaryFilteredFields:(id)a0 forCredential:(id)a1;
- (void)_sendDidEncounterError:(id)a0 requestContext:(id)a1;
- (void)_sendDidTransitionFromStep:(int)a0 toStep:(int)a1 withContext:(id)a2;
- (void)_startDigitalIssuancePaymentWithAmount:(id)a0 requestContext:(id)a1;
- (void)_startDigitalIssuancePaymentWithAmount:(id)a0 requestContext:(id)a1 serviceProviderProduct:(id)a2 productItem:(id)a3;
- (void)_startProvisioningForCredential:(id)a0 requestContext:(id)a1;
- (void)_startReaderModeIngestion:(id)a0;
- (void)_transitionBasedOnCredentials:(id)a0 product:(id)a1 requestContext:(id)a2;
- (void)_transitionBasedOnTermsForReason:(unsigned long long)a0 URL:(id)a1 requestContext:(id)a2;
- (void)_transitionToAppleBalanceAccountDetailsWithProduct:(id)a0 requestContext:(id)a1;
- (void)_transitionToChooseCredentials:(id)a0 product:(id)a1 requestContext:(id)a2;
- (void)_transitionToChooseFlowWithSections:(id)a0 requestContext:(id)a1;
- (void)_transitionToChooseProductWithProducts:(id)a0 requestContext:(id)a1;
- (void)_transitionToDigitalIssuanceForProduct:(id)a0 requestContext:(id)a1;
- (void)_transitionToFlowIngestionState:(unsigned long long)a0;
- (void)_transitionToFlowIngestionState:(unsigned long long)a0 progress:(double)a1;
- (void)_transitionToManualEntry:(id)a0;
- (void)_transitionToMoreInformationWithItems:(id)a0 pass:(id)a1 requestContext:(id)a2;
- (void)_transitionToProductDisambiguationWithProducts:(id)a0 requestContext:(id)a1;
- (void)_transitionToProvisioningForCredential:(id)a0 product:(id)a1 requestContext:(id)a2;
- (void)_transitionToProvisioningProgressWithRequestContext:(id)a0;
- (void)_transitionToReaderModeForProduct:(id)a0 requestContext:(id)a1;
- (void)_transitionToSecondaryManualEntryWithFields:(id)a0 credential:(id)a1 requestContext:(id)a2;
- (void)_transitionToVerificationChannelsWithPaymentPass:(id)a0 channels:(id)a1 requestContext:(id)a2;
- (void)_transitionToVerificationCodeWithPaymentPass:(id)a0 channel:(id)a1 requestContext:(id)a2;
- (void)_transitionToVerificationFieldsWithPaymentPass:(id)a0 fields:(id)a1 requestContext:(id)a2;
- (void)_updateVerificationForPass:(id)a0 channel:(id)a1 context:(id)a2;
- (void)_verifyPasscodeStateIfNecessaryWithCompletion:(id /* block */)a0;
- (void)acceptTerms:(id)a0;
- (void)acknowledgeAppleBalanceAccountDetailsWithProduct:(id)a0 requestContext:(id)a1;
- (void)acknowledgeMoreInformation:(id)a0;
- (void)acknowledgeWelcome:(id)a0;
- (void)chooseCredentials:(id)a0 requestContext:(id)a1;
- (void)chooseEMoneyProductFromFlowPickerSection:(id)a0 requestContext:(id)a1;
- (void)chooseFlowForPickerItem:(id)a0 requestContext:(id)a1;
- (void)chooseManualEntry:(id)a0;
- (void)chooseProduct:(id)a0 includeCardsOnFile:(BOOL)a1 requestContext:(id)a2;
- (void)chooseProduct:(id)a0 requestContext:(id)a1;
- (void)chooseProductAndCredentialsFlowForProduct:(id)a0 credentials:(id)a1 requestContext:(id)a2;
- (void)chooseReaderMode:(id)a0;
- (void)chooseTransitProductFromFlowPickerSection:(id)a0 requestContext:(id)a1;
- (void)ensureMetadataForCredentials:(id)a0 requestContext:(id)a1 updateHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)handleDigitalIssuanceAmount:(id)a0 requestContext:(id)a1;
- (void)handleDigitalIssuanceAmount:(id)a0 serviceProviderProduct:(id)a1 item:(id)a2 requestContext:(id)a3;
- (void)handleIssuerApplicationAddRequest:(id)a0 requestContext:(id)a1;
- (void)handleIssuerVerificationChannel:(id)a0 requestContext:(id)a1;
- (void)handleIssuerVerificationCode:(id)a0 requestContext:(id)a1;
- (void)handleIssuerVerificationFields:(id)a0 requestContext:(id)a1;
- (void)handleManualEntryFields:(id)a0 credential:(id)a1 requestContext:(id)a2;
- (void)handlePasscodeUpgradeCompleteWithSuccess:(BOOL)a0 error:(id)a1 requestContext:(id)a2;
- (void)handleProductSelection:(id)a0 requestContext:(id)a1;
- (void)handleReaderModeFields:(id)a0 requestContext:(id)a1;
- (BOOL)hasCredentialsAssociatedWithProduct:(id)a0;
- (id)initWithProvisioningController:(id)a0 setupContext:(long long)a1;
- (void)presentTransitServiceProviderProductsWithRequestContext:(id)a0;
- (void)skipIssuerVerification:(id)a0;
- (void)skipProvisioning:(id)a0;
- (void)startInAppProvisioningFlowWithConfiguration:(id)a0 requestContext:(id)a1;
- (void)startIssuerVerificationFlowForPaymentPass:(id)a0 requestContext:(id)a1;
- (void)startProvisioningFlow:(id)a0;

@end
