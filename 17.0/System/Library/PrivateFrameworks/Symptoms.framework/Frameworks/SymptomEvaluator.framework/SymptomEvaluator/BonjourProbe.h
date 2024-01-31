@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, BonjourProbeDelegate, OS_dispatch_queue;

@interface BonjourProbe : TestProbe {
    struct BonjourBrowser { } *bonjourManagerRef;
}

@property (retain, nonatomic) NSMutableDictionary *resolvers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *bonjourBrowserTimer;
@property (nonatomic) double bonjourBrowserTimerDuration;
@property (nonatomic) struct _DNSServiceRef_t { } *dnsRef;
@property (retain) id<BonjourProbeDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueue;
@property BOOL includeAWDL;
@property (retain, nonatomic) NSMutableDictionary *currentlyDiscoveredServices;
@property (retain, nonatomic) NSMutableDictionary *allDiscoveredServices;

- (id)initWithQueue:(id)a0;
- (void)stopTest;
- (void).cxx_destruct;
- (void)cancelTest:(id /* block */)a0;
- (void)dnsResolver:(id)a0 encounteredDNSError:(int)a1;
- (BOOL)loadBonjourSymbols;
- (void)startBonjourScanForService:(id)a0 onInterfaceNamed:(id)a1;
- (void)stopAllResolvers;

@end
