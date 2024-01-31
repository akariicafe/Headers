@class NSSet, NSString;

@interface PRPosterAmbientChargerConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying, NSMutableCopying, PRPosterRoleAttribute>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *associatedChargerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *attributeType;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)decodeObjectWithJSON:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)encodeJSON;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssociatedChargerIdentifiers:(id)a0;
- (BOOL)isAssociatedWithChargerIdentifier:(id)a0;
- (BOOL)isEqualToChargerConfiguration:(id)a0;

@end
