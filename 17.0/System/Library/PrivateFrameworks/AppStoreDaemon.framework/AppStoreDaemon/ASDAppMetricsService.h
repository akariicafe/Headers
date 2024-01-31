@class NSString, ASDServiceBroker;

@interface ASDAppMetricsService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)a0;
- (void)getMetricsEventsForType:(long long)a0 withReplyHandler:(id /* block */)a1;
- (void)postMetricsEventsForType:(long long)a0 withReplyHandler:(id /* block */)a1;
- (void)recordMetricsEventsForType:(long long)a0 withReplyHandler:(id /* block */)a1;
- (void)resetMetricsEventsForType:(long long)a0 withReplyHandler:(id /* block */)a1;

@end
