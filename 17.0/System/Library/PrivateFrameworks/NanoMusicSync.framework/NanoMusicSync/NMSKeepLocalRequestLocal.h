@interface NMSKeepLocalRequestLocal : NMSKeepLocalRequest

+ (id)sharedKeepLocalOperationQueue;

- (void)_performRequestWithConstraints:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)performWithOptions:(id)a0 completion:(id /* block */)a1;

@end
