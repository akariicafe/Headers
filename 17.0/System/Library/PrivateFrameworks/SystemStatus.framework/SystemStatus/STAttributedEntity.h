@class NSString, STUserIdentity, STExecutableIdentity;

@interface STAttributedEntity : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STExecutableIdentity *executableIdentity;
@property (readonly, copy, nonatomic) STUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) NSString *website;
@property (readonly, nonatomic, getter=isSystemService) BOOL systemService;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedExecutableDisplayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericSystemServicesEntity;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1 systemService:(BOOL)a2 localizedDisplayName:(id)a3 localizedExecutableDisplayName:(id)a4;
- (id)initWithBundlePath:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesAttributedEntity:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithExecutableIdentity:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithExecutablePath:(id)a0;
- (void).cxx_destruct;
- (id)initWithExecutableIdentity:(id)a0 systemService:(BOOL)a1;
- (id)succinctDescription;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1 systemService:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
