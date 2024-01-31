@class NSObject, IRRapportProvider, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface IRCompanionLinkClient : NSObject {
    BOOL _companionLinkClientActive;
}

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, weak, nonatomic) IRRapportProvider *rapportProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopDiscovery;
- (void)startDiscovery;
- (void)_didUpdateRapportDevices;
- (unsigned long long)currentControlFlags;
- (long long)currentRssiThreshold;
- (id)initWithRapportProvider:(id)a0 targetQueue:(id)a1;

@end
