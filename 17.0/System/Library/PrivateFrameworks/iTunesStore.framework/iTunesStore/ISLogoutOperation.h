@class SSAccount, NSString;

@interface ISLogoutOperation : ISOperation

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) NSString *logKey;

- (id)_copyAuthenticationContext;
- (void)run;
- (void).cxx_destruct;
- (id)_createDisableBookkeeperRequestPropertiesWithURL:(id)a0;
- (id)_createLogoutRequestProperties;
- (void)_disableAutomaticDownloadKinds;
- (void)_disableBookkeeper;
- (id)_sbsyncData;
- (void)_sendLogoutRequest;
- (id)initWithAccount:(id)a0 logKey:(id)a1;

@end
