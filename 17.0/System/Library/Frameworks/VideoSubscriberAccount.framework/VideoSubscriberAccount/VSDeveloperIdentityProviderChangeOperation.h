@class VSIdentityProvider, VSOptional, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) long long changeKind;

- (id)init;
- (void)dealloc;
- (void)executionDidBegin;
- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
