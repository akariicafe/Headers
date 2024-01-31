@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface HMDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser

@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSDictionary *demoData;
@property (nonatomic) BOOL accessoryPaired;

- (long long)linkType;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)stopDiscoveringAccessoryServers;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)appendDemoData:(id)a0;
- (id)_handleTestAccessoryGenerateNotification:(id)a0;
- (id)_handleTestAccessoryReadValue:(id)a0;
- (id)_handleTestAccessorySetReachability:(id)a0;
- (id)_handleTestAccessorySetValue:(id)a0 response:(id *)a1;
- (id)_handleTestModeConfigRequest:(id)a0 response:(id *)a1;
- (void)discoverServer;
- (void)loadDemoData:(id)a0 finalized:(BOOL)a1;
- (void)resetDemoAccessories;
- (void)resetDemoAccessory:(id)a0;

@end
