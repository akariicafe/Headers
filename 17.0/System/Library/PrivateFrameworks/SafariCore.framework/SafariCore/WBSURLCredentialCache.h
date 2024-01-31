@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSURLCredentialCache : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_credentialCache;
    id /* block */ _credentialFetchBlock;
}

@property (readonly, copy) NSDictionary *credentials;

- (void)invalidate;
- (void).cxx_destruct;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;
- (id)initWithCachingMode:(long long)a0 credentialFetchBlock:(id /* block */)a1;
- (id)initWithCredentialFetchBlock:(id /* block */)a0;

@end
