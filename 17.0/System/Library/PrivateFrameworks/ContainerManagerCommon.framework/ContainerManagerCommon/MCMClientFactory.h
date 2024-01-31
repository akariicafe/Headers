@class NSString, MCMUserIdentityCache;
@protocol MCMClientCodeSignInfoCache, MCMClientIdentityCache;

@interface MCMClientFactory : NSObject <MCMClientFactoryWithXPC, MCMClientFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) id<MCMClientCodeSignInfoCache> clientCodeSignInfoCache;
@property (readonly, nonatomic) id<MCMClientIdentityCache> clientIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_codeSignInfoWithClient:(struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)a0 CDHash:(id)a1 identifier:(id)a2 error:(id *)a3;
- (id)initWithUserIdentityCache:(id)a0 clientCodeSignInfoCache:(id)a1 clientIdentityCache:(id)a2;
- (id)clientIdentityWithClientMessageContext:(id)a0 xpcMessage:(id)a1 error:(id *)a2;
- (id)_clientIdentityWithClient:(struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)a0 realAuditToken:(struct { unsigned int x0[8]; })a1 extension:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)_clientIdentityWithClientMessageContext:(id)a0 error:(id *)a1;

@end
