@interface FMDaemon : NSObject

- (void)startupWithCompletion:(id /* block */)a0;
- (void)run;
- (void)initialize;
- (id)xpcDarwinEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)registerXPCEventHandlers;
- (void)startup;
- (id)xpcDistributedEventHandlers;

@end
