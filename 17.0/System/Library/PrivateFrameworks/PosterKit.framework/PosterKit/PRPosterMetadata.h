@class NSString;

@interface PRPosterMetadata : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding, PRPosterRoleAttribute>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
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
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayNameLocalizationKey:(id)a0;

@end
