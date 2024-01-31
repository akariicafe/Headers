@class PRSServerPosterPath, NSString, PRMutablePosterConfiguration, PRSPosterUpdateSessionInfo, PRSPosterConfiguration;

@interface PRUIModalEntryPointEditing : NSObject <PRUIModalEntryPoint>

@property (readonly, nonatomic, getter=_serviceConfiguration) PRSPosterConfiguration *serviceConfiguration;
@property (readonly, nonatomic) long long editingType;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) PRMutablePosterConfiguration *configuration;
@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath;
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *updateSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionIdentifier:(id)a0 configuration:(id)a1;
- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)initWithServiceConfiguration:(id)a0;
- (id)initWithServiceConfiguration:(id)a0 updateSessionInfo:(id)a1;
- (id)initWithType:(long long)a0 extensionIdentifier:(id)a1 configuration:(id)a2 updateSessionInfo:(id)a3;

@end
