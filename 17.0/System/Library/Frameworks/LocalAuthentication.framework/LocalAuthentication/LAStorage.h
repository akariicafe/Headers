@class LAContext, NSXPCConnection;
@protocol LASecureStorageService;

@interface LAStorage : NSObject

@property (class, readonly) unsigned int newInstanceId;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LASecureStorageService> remoteObjectProxy;
@property (readonly, nonatomic) unsigned int instanceId;
@property (readonly, nonatomic) long long domain;
@property (nonatomic) struct __SecAccessControl { } *accessControl;
@property (readonly, nonatomic) LAContext *authenticationContext;

+ (Class)classForKey:(long long)a0;
+ (BOOL)isKeyAvailable:(long long)a0;
+ (id)additionalBoolEntitlementForKey:(long long)a0 operation:(long long)a1 value:(id)a2;
+ (id)maxDataLengthForKey:(long long)a0;
+ (id)minDataLengthForKey:(long long)a0;
+ (id)objectDescription:(id)a0;
+ (long long)policyForKey:(long long)a0 operation:(long long)a1 value:(id)a2;

- (void)dealloc;
- (BOOL)boolForKey:(long long)a0;
- (id)description;
- (void)_resetConnection;
- (void).cxx_destruct;
- (id)dataForKey:(long long)a0 error:(id *)a1;
- (id)dataForKey:(long long)a0;
- (BOOL)setData:(id)a0 forKey:(long long)a1 error:(id *)a2;
- (BOOL)boolForKey:(long long)a0 error:(id *)a1;
- (void)objectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setObject:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_bootstrapServiceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)a0 proxyBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_callProxyBlock:(id /* block */)a0 authenticationPolicy:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_class:(Class)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_connectToEndpoint:(id)a0;
- (struct __SecAccessControl { } *)accessControlForKey:(long long)a0 error:(id *)a1;
- (void)boolForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dataForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithDomain:(long long)a0 authenticationContext:(id)a1;
- (void)removeObjectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setBool:(BOOL)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)setBool:(BOOL)a0 forKey:(long long)a1 error:(id *)a2;
- (void)setData:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;

@end
