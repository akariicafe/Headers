@class NSString, AKDevice;
@protocol AKAnisetteServiceProtocol;

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {
    AKDevice *_proxiedDevice;
    NSString *_appProvidedContext;
    id<AKAnisetteServiceProtocol> _anisetteDataProvider;
}

- (void).cxx_destruct;
- (id)_sessionConfiguration;
- (id)_authContextForRenewCredentials;
- (void)_addHeadersToRequest:(id)a0;
- (void)_agreeToTermsWithURLString:(id)a0 preferPassword:(BOOL)a1 completion:(id /* block */)a2;
- (void)_sendAcceptedTermsInfo:(id)a0;
- (id)initWithAuthResults:(id)a0;
- (id)initWithAuthResults:(id)a0 proxiedDevice:(id)a1 anisetteDataProvider:(id)a2 appProvidedContext:(id)a3 termsEntries:(id)a4;
- (id)initWithAuthResults:(id)a0 proxiedDevice:(id)a1 appProvidedContext:(id)a2;

@end
