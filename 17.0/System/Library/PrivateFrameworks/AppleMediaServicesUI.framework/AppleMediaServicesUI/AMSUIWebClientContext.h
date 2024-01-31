@class AMSUIWebFlowController, NSString, AMSMescalAccountPrimeSession, AMSUIWebPageViewController, AMSSnapshotBag, NSDictionary, AMSUIWebPluginLoader, ACAccount, AMSUIWebJSDataProvider, AMSMetrics, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIWebActionRunnerDelegate;

@interface AMSUIWebClientContext : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> backingBag;
@property (readonly, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<AMSUIWebActionRunnerDelegate> actionDelegate;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (readonly, nonatomic) AMSSnapshotBag *bag;
@property (nonatomic) BOOL bootstrapComplete;
@property (readonly, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *clientOptions;
@property (retain, nonatomic) AMSUIWebJSDataProvider *dataProvider;
@property (readonly, nonatomic) BOOL disableTrustedDomains;
@property (retain, nonatomic) AMSUIWebFlowController *flowController;
@property (retain, nonatomic) NSString *versionNumber;
@property (nonatomic) BOOL loadUsingWebKit;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSMetrics *metrics;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) AMSMescalAccountPrimeSession *mescalSession;
@property (retain, nonatomic) AMSUIWebPluginLoader *pluginLoader;
@property (nonatomic) BOOL signatureResumption;
@property (retain, nonatomic) AMSURLSession *URLSession;
@property (weak, nonatomic) AMSUIWebPageViewController *webPage;
@property (weak, nonatomic) NSString *URL;

+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (id)_createClientInfoFromAccount:(id)a0 clientInfo:(id)a1;

- (void).cxx_destruct;
- (id)JSAccountFromAccount:(id)a0 store:(id)a1;
- (id)iTunesAccountFromJSAccount:(id)a0;
- (id)iTunesAccountFromJSDSID:(id)a0;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 backingBag:(id)a2;
- (id)loadSnapshot;
- (void)replaceCurrentAccount:(id)a0 clientInfo:(id)a1;
- (void)updateBackingBag:(id)a0;

@end
