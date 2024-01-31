@interface WFReachabilityConfigurationRequest : WFTask

@property (copy, nonatomic) id /* block */ resultHandler;

- (void)handleResponse:(id)a0;
- (void)cleanup;
- (BOOL)requiresResponse;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResultHandler:(id /* block */)a0;

@end
