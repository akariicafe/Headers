@class CDPContext, CDPEscapeOption, CDPRemoteValidationEscapeOffer;
@protocol CDPRecoveryKeyValidator, CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRecoveryKeyEntryViewModel : NSObject {
    id<CDPRecoveryKeyValidator> _validator;
    id<CDPRemoteDeviceSecretValidatorProtocol> _secretValidator;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) int mode;
@property BOOL shouldSuppressCancelButton;
@property BOOL isFooterForVerifyFlow;
@property BOOL isFooterForMismatchRepairFlow;
@property (nonatomic) BOOL isWalrusEnabled;
@property (readonly, nonatomic) BOOL isFooterButtonForOtherRecoveryOptions;
@property (retain, nonatomic) CDPEscapeOption *custodianRecoveryEscapeOption;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *deleteiCloudDataEscapeOffer;
@property (retain, nonatomic) CDPContext *context;

- (id)headerSubtitle;
- (id)headerTitle;
- (void).cxx_destruct;
- (id)recoveryKey;
- (id)placeholderText;
- (BOOL)mandatesRecoveryKey;
- (void)handleCancel;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (id)initWithContext:(id)a0 validator:(id)a1 mode:(int)a2;
- (id)footerLabelText;
- (id)footerButtonTitle;
- (void)handleForgotRecoveryKeyWithCDPStateError:(long long)a0;
- (void)handleNoRecoveryKeyWithCDPStateError:(long long)a0;
- (BOOL)isDataRecoveryFlow;
- (void)processCollectedRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsRKRecovery;

@end
