@class CellOutrankHandler, NSObject, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_queue;

@interface WiFiViabilityMonitor : NSObject {
    unsigned int _prevWiFiViability;
    id _cellFallbackObserver;
    id _cellFallbackAdminObserver;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellOutrankHandler *_outrankRelay;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)getState;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (long long)_currentRNFAdvice;
- (BOOL)_isCellFallbackAdminDisabled;
- (BOOL)_isCellOutrankStateMachineInOutrank;
- (unsigned int)currentWiFiViabilityFlags;
- (void)possiblySignificantWiFiChange;

@end
