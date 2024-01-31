@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>

@property (retain, nonatomic) id<AKAuthorizationUIProvider> uiProvider;

- (void)dealloc;
- (void)presentAuthorizationUIForContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
