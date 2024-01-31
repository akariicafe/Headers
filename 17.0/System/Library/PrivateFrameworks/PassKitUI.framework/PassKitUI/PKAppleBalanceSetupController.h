@class PKAppleBalanceCredential, PKAccount, PKAppleBalanceDirectTopUpConfiguration;

@interface PKAppleBalanceSetupController : NSObject

@property (nonatomic) BOOL uiOnly;
@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKAppleBalanceDirectTopUpConfiguration *configuration;
@property (readonly, nonatomic) long long setupContext;
@property (readonly, nonatomic) PKAppleBalanceCredential *credential;

- (void).cxx_destruct;
- (id)initWithProduct:(id)a0 setupContext:(long long)a1;
- (id)initWithSetupContext:(long long)a0 uiOnly:(BOOL)a1;

@end
