@class NSString;

@interface HAHDPinnedContentTaskServer : HDStandardTaskServer <HAHDPinnedContentStoreServerInterface>

@property (class, nonatomic, readonly) NSString *taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_fetchPinnedContentInDomain:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_movePinnedContentWithIdentifier:(id)a0 inDomain:(id)a1 toIndex:(id)a2 completion:(id /* block */)a3;
- (void)remote_pinContentWithIdentifier:(id)a0 inDomain:(id)a1 atIndex:(id)a2 completion:(id /* block */)a3;
- (void)remote_unpinAllContentInDomain:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_unpinContentWithIdentifier:(id)a0 inDomain:(id)a1 completion:(id /* block */)a2;

@end
