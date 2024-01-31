@interface WRMBasebandMetricsInterface : WRMClientInterface {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
}

- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)getQSHMetrics:(id /* block */)a0;
- (id)init;
- (void)reConnect;
- (void)processWRMWiFiBWEstMetrics:(id)a0;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)unregisterClient;
- (void)processWRMCellDataMetrics:(id)a0;

@end
