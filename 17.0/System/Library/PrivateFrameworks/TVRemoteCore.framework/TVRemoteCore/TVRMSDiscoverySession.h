@class NSString, NSArray, TVRMSReachability, NSMutableSet;
@protocol TVRMSDiscoverySessionDelegate;

@interface TVRMSDiscoverySession : NSObject <TVRMSServiceProviderDelegate, TVRMSDiscoverySession> {
    TVRMSReachability *_reachability;
    NSMutableSet *_availableServices;
    NSArray *_providers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TVRMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (readonly, nonatomic) NSArray *availableServices;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;

+ (id)localDiscoverySession;
+ (id)proxyDiscoverySession;

- (id)init;
- (void)dealloc;
- (void)beginDiscovery;
- (void).cxx_destruct;
- (void)endDiscovery;
- (void)_enableProviders;
- (void)_handleHSGroupIDDidChangeNotification:(id)a0;
- (void)_handleReachabilityChangedNotification:(id)a0;
- (id)_providerForDiscoveryType:(long long)a0;
- (void)_updateWifiAvailability;
- (void)serviceProvider:(id)a0 serviceDidBecomeAvailable:(id)a1;
- (void)serviceProvider:(id)a0 serviceDidBecomeUnavailable:(id)a1;

@end
