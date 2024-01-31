@class NSString, NSDictionary, CKEntitlements, NSDate, CKDXPCConnection;
@protocol CKXPCProcessScopedClient;

@interface CKDProcessScopedClientProxy : NSObject

@property (retain) id<CKXPCProcessScopedClient> processScopedClientProxyCreator;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) NSDate *connectionDate;
@property (retain, nonatomic) NSDictionary *connectionEntitlements;
@property (nonatomic) long long hasValidatedEntitlementsTernary;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processBinaryName;
@property (readonly, nonatomic) NSString *procName;
@property (readonly, getter=isSandboxed) BOOL sandboxed;
@property (nonatomic) unsigned int clientSDKVersion;
@property (readonly, nonatomic) CKEntitlements *clientEntitlements;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (BOOL)processIsAttached;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenFileAtURL:(id)a0;
- (void)tearDown;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;
- (id)CKPropertiesDescription;
- (id)description;
- (id)issueSandboxExtensionForItem:(id)a0 error:(id *)a1;
- (void)getProcessScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)hasValidatedEntitlements;
- (id)initWithClientConnection:(id)a0;
- (void)noteSystemIsAvailable;

@end
