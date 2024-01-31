@class NSString, NSUUID;

@interface PRPosterFocusConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying, PRPosterRoleAttribute>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSUUID *activityUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *attributeType;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)decodeObjectWithJSON:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)encodeJSON;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivityIdentifier:(id)a0 activityUUID:(id)a1;
- (BOOL)isEqualToFocusConfiguration:(id)a0;

@end
