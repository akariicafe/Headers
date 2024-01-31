@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>

@property (nonatomic) struct __SCDynamicStore { } *store;
@property (nonatomic) BOOL lastPostedNetworkUp;
@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor;
@property (retain, nonatomic) NSString *myIP;
@property (retain, nonatomic) NSArray *myIPs;
@property (readonly, nonatomic) BOOL isNetworkUp;
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (readonly, nonatomic) struct __SCDynamicStore { } *getDynamicStore;

+ (id)sharedInstance;
+ (BOOL)enableNotifications;
+ (void)disableNotifications;

- (void)systemWillSleep;
- (id)init;
- (void)dealloc;
- (int)linkQualityValueForInterfaceType:(unsigned long long)a0;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)a0;
- (id)primaryInterfaceName;
- (void)_clearIPCache;
- (void)connectionMonitorDidUpdate:(id)a0;
- (int)linkQualityValueForInterface:(id)a0;
- (void).cxx_destruct;
- (BOOL)_listenForChanges;
- (BOOL)isPrimaryCellular;
- (void)systemDidWake;

@end
