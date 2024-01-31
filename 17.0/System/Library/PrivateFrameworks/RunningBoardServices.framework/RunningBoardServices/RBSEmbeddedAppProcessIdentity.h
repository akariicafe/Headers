@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (unsigned char)defaultManageFlags;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEmbeddedApplication;
- (id)encodeForJob;
- (BOOL)isEqual:(id)a0;
- (id)embeddedApplicationIdentifier;
- (id)copyWithAuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isApplication;
- (BOOL)isAnonymous;
- (id)personaString;
- (id)copyWithPersonaString:(id)a0;

@end
