@class NSString;

@interface VUINetworkReachabilityMonitor : NSObject <ICEnvironmentMonitorObserver>

@property (getter=isNetworkReachable) BOOL networkReachable;
@property (retain, nonatomic) id networkTypeChangedNotificationToken;
@property (retain, nonatomic) id networkReachabilityChangedNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)_isNetworkReachable;

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (id)init;
- (id)_init;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void).cxx_destruct;
- (void)_updateNetworkReachability;

@end
