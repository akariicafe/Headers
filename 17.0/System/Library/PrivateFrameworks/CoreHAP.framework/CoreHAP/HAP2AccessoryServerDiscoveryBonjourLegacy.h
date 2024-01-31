@class HAP2PropertyLock, CUBonjourBrowser, NSString, NSObject;
@protocol OS_dispatch_queue, HAP2AccessoryServerDiscoveryDelegate;

@interface HAP2AccessoryServerDiscoveryBonjourLegacy : HAP2LoggingObject <HAP2AccessoryServerDiscovery>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (readonly, nonatomic) CUBonjourBrowser *browser;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;
@property (weak, nonatomic) id<HAP2AccessoryServerDiscoveryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)_stopBrowser;
- (id)init;
- (void)dealloc;
- (void)reconfirmAccessory:(id)a0;
- (void)setBrowser:(id)a0;
- (void)_handleBrowserStopped:(id)a0;
- (void)stopDiscovering;
- (void)_handleDeviceFoundOrChanged:(id)a0;
- (void).cxx_destruct;
- (void)_startDiscovering;
- (id)initWithServiceType:(id)a0 domain:(id)a1;
- (void)_stopDiscovering;
- (void)_startBrowser;
- (id)initWithLocalDomainAndServiceType:(id)a0;
- (void)_handleDeviceLost:(id)a0;
- (void)_reconfirmAccessory:(id)a0;
- (void)startDiscovering;

@end
