@class NSString, CellOutrankHandler, NetworkAnalyticsStateRelay, NSObject;
@protocol OS_dispatch_source;

@interface MPTCPHandler : NSObject <ConfigurableObjectProtocol> {
    int _kernelWifiAdvice;
    int _kernelCellAdvice;
    long long _rnfAdvice;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    CellOutrankHandler *_outrankRelay;
    id relayReadyObserver;
    id rnfWiFiObserver;
}

@property int sockfd;
@property (retain) NSObject<OS_dispatch_source> *socksrc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)rnfWiFiEvent:(id)a0 withInfo:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_setMPTCPAdvisoryCell:(int)a0;
- (int)configureInstance:(id)a0;
- (void)_setMPTCPAdvisoryWiFi:(long long)a0;
- (void)setupSockFD;
- (void)sendReply:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_performUpdate;
- (void)handleSrcEvent;

@end
