@class NSCache, CoreTelephonyClient;

@interface PSAppDataUsagePolicyCache : NSObject

@property (retain, nonatomic) NSCache *policyCache;
@property (retain, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain, nonatomic) CoreTelephonyClient *ctClient;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)clearCache;
- (void)dealloc;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (void)fetchUsagePoliciesFor:(id)a0;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (void)handlePolicyChangedNotification;
- (void)addPoliciesToCache:(id)a0;
- (void)fetchUsagePolicyFor:(id)a0;
- (id)policiesFor:(id)a0;
- (void)setPolicies:(id)a0 completion:(id /* block */)a1;

@end
