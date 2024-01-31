@class NSString, NSUUID;

@interface PRSServerPosterIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isIncomingConfiguration;
@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long supplement;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4;
+ (BOOL)supportsBSXPCSecureCoding;
+ (void)_setDisableUniquing:(BOOL)a0;
+ (id)debugDescription;
+ (id)configurationIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4 supplement:(unsigned long long)a5;
+ (id)staticDescriptorIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4;
+ (id)incomingConfigurationIdentityWithProvider:(id)a0 role:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3 supplement:(unsigned long long)a4;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNewerVersionOfIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
