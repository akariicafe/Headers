@class NSString, NSUUID, RBSProcessIdentity;

@interface RBLaunchdProperties : NSObject {
    long long _type;
    NSString *_path;
    BOOL _explicitAngelFlag;
    BOOL _doesOverrideHasBackoff;
}

@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, nonatomic, getter=isMultiInstance) BOOL multiInstance;
@property (readonly, nonatomic, getter=hasVariableEUID) BOOL variableEUID;
@property (readonly, nonatomic) BOOL doesOverrideManagement;
@property (readonly, nonatomic) unsigned char overrideManageFlags;
@property (readonly, nonatomic) BOOL disableFreezing;
@property (readonly, nonatomic) BOOL hasBackoff;
@property (readonly, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) int hostPid;
@property (readonly, nonatomic) NSString *underlyingAssertion;
@property (readonly, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *homeDirectory;
@property (readonly, copy, nonatomic) NSString *tmpDirectory;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity;

+ (id)propertiesForJob:(id)a0;
+ (id)propertiesForLabel:(id)a0 error:(id *)a1;
+ (id)_instanceWithProperties:(id)a0 xpcProps:(id)a1;
+ (id)processIdentityForEndpoint:(id)a0;
+ (id)propertiesForPid:(int)a0;

- (id)_configureAppWithProperties:(id)a0;
- (id)_initWithProperties:(id)a0 xpcProps:(id)a1;
- (id)_configureDaemonOrAngelWithProperties:(id)a0 path:(id)a1 isAngel:(BOOL)a2;
- (id)resolvedIdentityWithPid:(int)a0 auid:(unsigned int)a1;
- (void)_parseLASSProperties:(id)a0;
- (void).cxx_destruct;
- (void)_parseAdditionalProperties:(id)a0;
- (id)_configureXPCServiceWithProperties:(id)a0 HostPid:(int)a1;
- (id)resolvedIdentity;

@end
