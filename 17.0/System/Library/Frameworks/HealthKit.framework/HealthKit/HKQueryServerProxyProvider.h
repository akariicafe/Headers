@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

@property BOOL shouldForceReactivation;

- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;
- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)initWithHealthStore:(id)a0 query:(id)a1 configuration:(id)a2 queryUUID:(id)a3;

@end
