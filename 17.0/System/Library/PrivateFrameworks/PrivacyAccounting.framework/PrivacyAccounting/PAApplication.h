@class PABridgedTCCIdentity, NSString, NSObject;
@protocol OS_tcc_identity;

@interface PAApplication : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly, nonatomic) PAApplication *applicationForCurrentProcess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int insecureProcessIdentifier;
@property (readonly, nonatomic) NSString *descriptionForIdentifier;
@property (readonly, nonatomic) PABridgedTCCIdentity *bridgedAssumedIdentity;
@property (readonly, nonatomic) long long identifierType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;

+ (id)applicationWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)applicationWithType:(long long)a0 identifier:(id)a1;
+ (id)applicationWithBundleID:(id)a0;
+ (id)applicationWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0;
- (id)initWithInProcessBridgedAssumedIdentity:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionForIdentifierType;
- (id)description;
- (id)initWithInsecureProcessIdentifier:(int)a0;
- (id)initWithInProcessIdentity;
- (void).cxx_destruct;
- (id)JSONObject;
- (BOOL)isEqual:(id)a0;
- (id)initWithInProcessAssumedIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTCCIdentity:(id)a0;

@end
