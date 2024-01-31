@interface APMescalSigningRequestor : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (id)remoteObjectInterface;
- (void)connectionInterrupted;
- (id)init;
- (void)connectionInvalidated;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;

@end
