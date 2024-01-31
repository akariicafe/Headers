@class NSArray, MCMClientIdentity;

@interface MCMResultQuery : MCMResultBase

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) BOOL includePath;
@property (readonly, nonatomic) BOOL includeInfo;
@property (readonly, nonatomic) BOOL issueSandboxExtensions;
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;

- (void)_compileContainerDataForIndex:(unsigned long long)a0 container:(struct container_object_s **)a1 infos:(id)a2 tokens:(id)a3;
- (void).cxx_destruct;
- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithContainers:(id)a0 clientIdentity:(id)a1 issueSandboxExtensions:(BOOL)a2 includePath:(BOOL)a3 includeInfo:(BOOL)a4 legacyPersonaPolicy:(BOOL)a5 legacyExtensionPolicy:(BOOL)a6 includeUserManagedAssetsRelPath:(BOOL)a7;

@end
