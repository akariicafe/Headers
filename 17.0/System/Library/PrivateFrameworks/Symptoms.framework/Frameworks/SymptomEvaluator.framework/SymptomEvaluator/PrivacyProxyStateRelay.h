@class NSObject, NSMutableArray, SFPrivacyProxyTraffic;
@protocol OS_dispatch_queue;

@interface PrivacyProxyStateRelay : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    int proxyConfigurationToken;
    int proxyStatusToken;
    int proxyPathToken;
    int proxyXPCReadyToken;
    NSObject<OS_dispatch_queue> *_privacyProxyStateQueue;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned int serviceStatus;
@property (retain, nonatomic) NSMutableArray *networks;
@property (nonatomic) unsigned int userTier;
@property (retain, nonatomic) SFPrivacyProxyTraffic *traffic;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)networkStatusString:(unsigned int)a0;
+ (id)userTierString:(unsigned int)a0;
+ (unsigned int)networkStatusFromNSPStatus:(unsigned long long)a0;
+ (unsigned int)userTierFromNSPTier:(unsigned long long)a0;
+ (id)serviceStatusString:(unsigned int)a0;
+ (unsigned int)serviceStatusFromNSPStatus:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)updatePrivacyProxyStatus;
- (void)updatePrivacyProxyPath;
- (void).cxx_destruct;
- (void)updatePrivacyProxyConfiguration;

@end
