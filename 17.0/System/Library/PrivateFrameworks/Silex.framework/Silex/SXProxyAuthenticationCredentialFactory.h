@class NSString;
@protocol SXProxyAuthenticationKeyProvider;

@interface SXProxyAuthenticationCredentialFactory : NSObject <SXProxyAuthenticationCredentialFactory>

@property (readonly, nonatomic) id<SXProxyAuthenticationKeyProvider> keyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)createCredentialForResponse:(id)a0 date:(id)a1 completion:(id /* block */)a2;
- (id)initWithKeyProvider:(id)a0;

@end
