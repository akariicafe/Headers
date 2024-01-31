@class NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext, NSString, NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext, NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext, NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext, NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext, NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext, NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext, NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext;

@interface NPKProtoStandalonePaymentProvisioningFlowStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsAddLater : 1; } _has;
}

@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly, nonatomic) BOOL hasBackStepIdentifier;
@property (retain, nonatomic) NSString *backStepIdentifier;
@property (nonatomic) BOOL hasAllowsAddLater;
@property (nonatomic) BOOL allowsAddLater;
@property (readonly, nonatomic) BOOL hasWelcomeStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *welcomeStepContext;
@property (readonly, nonatomic) BOOL hasChooseFlowStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *chooseFlowStepContext;
@property (readonly, nonatomic) BOOL hasChooseProductStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *chooseProductStepContext;
@property (readonly, nonatomic) BOOL hasChooseCredentialsStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *chooseCredentialsStepContext;
@property (readonly, nonatomic) BOOL hasDigitalIssuanceAmountStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *digitalIssuanceAmountStepContext;
@property (readonly, nonatomic) BOOL hasDigitalIssuancePaymentStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *digitalIssuancePaymentStepContext;
@property (readonly, nonatomic) BOOL hasMoreInformationStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *moreInformationStepContext;
@property (readonly, nonatomic) BOOL hasReaderModeEntryStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *readerModeEntryStepContext;
@property (readonly, nonatomic) BOOL hasReaderModeIngestionStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *readerModeIngestionStepContext;
@property (readonly, nonatomic) BOOL hasManualEntryStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext;
@property (readonly, nonatomic) BOOL hasSecondaryManualEntryStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *secondaryManualEntryStepContext;
@property (readonly, nonatomic) BOOL hasLocalDeviceManualEntryStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *localDeviceManualEntryStepContext;
@property (readonly, nonatomic) BOOL hasLocalDeviceManualEntryProgressStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *localDeviceManualEntryProgressStepContext;
@property (readonly, nonatomic) BOOL hasProductDisambiguationStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *productDisambiguationStepContext;
@property (readonly, nonatomic) BOOL hasPasscodeUpgradeStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext *passcodeUpgradeStepContext;
@property (readonly, nonatomic) BOOL hasTermsAndConditionsStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *termsAndConditionsStepContext;
@property (readonly, nonatomic) BOOL hasProvisioningProgressStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *provisioningProgressStepContext;
@property (readonly, nonatomic) BOOL hasProvisioningResultStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *provisioningResultStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationChannelsStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *issuerVerificationChannelsStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationFieldsStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *issuerVerificationFieldsStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationCodeStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *issuerVerificationCodeStepContext;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
