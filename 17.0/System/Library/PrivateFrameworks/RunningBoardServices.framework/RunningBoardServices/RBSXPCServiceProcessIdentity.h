@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (id)persona;
- (id)validationToken;
- (id)initWithDecodeFromJob:(id)a0;
- (unsigned long long)hash;
- (BOOL)isXPCService;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesRecoveredIdentity:(id)a0;
- (id)uuid;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)_matchesIdentity:(id)a0;
- (unsigned char)defaultManageFlags;
- (BOOL)isExtension;
- (id)hostIdentifier;
- (BOOL)isExternal;
- (void).cxx_destruct;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)inheritsCoalitionBand;
- (id)xpcServiceIdentifier;
- (id)encodeForJob;
- (id)copyWithAuid:(unsigned int)a0;
- (id)hostIdentity;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)personaString;

@end
