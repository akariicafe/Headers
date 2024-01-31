@protocol CKAlertUtilitiesProtocol;

@interface CKAlertUtilities : NSObject

@property (weak, nonatomic) id<CKAlertUtilitiesProtocol> delegate;

+ (id)coreTelephonyClient;
+ (id)phoneNumberInfo;
+ (id)_getCTPhoneNumber;
+ (id)_grabCTSIMStatus;
+ (BOOL)_isNumberEditable;
+ (long long)missingAlertTypeToNotify;
+ (id)selectedSubscriptionContext;

- (void).cxx_destruct;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_displayMissingInformationAlert:(long long)a0;
- (void)_showNetworkPrefs:(long long)a0;
- (void)checkMissingCarrierSetting;

@end
