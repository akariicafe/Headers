@class NSString;
@protocol PRPosterContentStyle;

@interface PRPosterAmbientConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying, NSMutableCopying, PRPosterRoleAttribute>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long supportedDataLayout;
@property (nonatomic) long long creationBehavior;
@property (nonatomic) long long deletionBehavior;
@property (nonatomic) long long editingBehavior;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL needsAuthentication;
@property (copy, nonatomic) NSString *displayNameSystemSymbolName;
@property (copy, nonatomic) NSString *editingSystemSymbolName;
@property (retain, nonatomic) id<PRPosterContentStyle> editingContentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *attributeType;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)decodeObjectWithJSON:(id)a0;
+ (id)allowedEditingContentStyleClasses;

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
- (id)initWithSupportedDataLayout:(long long)a0;
- (id)initWithSupportedDataLayout:(long long)a0 creationBehavior:(long long)a1 editingBehavior:(long long)a2 deletionBehavior:(long long)a3;
- (id)initWithSupportedDataLayout:(long long)a0 creationBehavior:(long long)a1 editingBehavior:(long long)a2 deletionBehavior:(long long)a3 isHidden:(BOOL)a4 needsAuthentication:(BOOL)a5;
- (BOOL)isEqualToAmbientConfiguration:(id)a0;

@end
