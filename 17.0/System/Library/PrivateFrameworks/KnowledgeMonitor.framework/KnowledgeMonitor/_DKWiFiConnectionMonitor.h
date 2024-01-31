@class NSString, BMSource, CWFInterface;

@interface _DKWiFiConnectionMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {
    BMSource *_source;
    CWFInterface *_interface;
    NSString *_currentSSID;
}

@property (copy, nonatomic) id /* block */ historicalDeletingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entitlements;
+ (BOOL)writeToBiome;

- (void)start;
- (void)_handleWiFiEvent:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)_handleKnownNetworkProfileChangedEvent:(id)a0;
- (void)_handleWiFiStateChangeEvent:(id)a0;

@end
