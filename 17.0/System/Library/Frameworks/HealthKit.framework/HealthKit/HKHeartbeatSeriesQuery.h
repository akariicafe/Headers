@class NSString, HKHeartbeatSeriesSample;

@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface> {
    id /* block */ _bufferHandler;
    HKHeartbeatSeriesSample *_heartbeatSeries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)_enumerateHeartbeatData:(id)a0 final:(BOOL)a1 handler:(id /* block */)a2;
- (void)client_deliverHeartbeats;
- (id)initWithHeartbeatSeries:(id)a0 bufferHandler:(id /* block */)a1;
- (id)initWithHeartbeatSeries:(id)a0 dataHandler:(id /* block */)a1;

@end
