@interface WISServerConnection : NSObject {
    void *fServerConnection;
}

- (void)dealloc;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (id)initWithComponentId:(unsigned int)a0;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;
- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (id)getComponentConfigurationParameters;
- (BOOL)submitMetric:(id)a0;
- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (BOOL)sendTriggerForEvent:(unsigned int)a0 observeEventWithCallback:(id /* block */)a1;
- (unsigned long long)getWISTimestamp;

@end
