@class NSString;

@interface FBSSceneIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying> {
    NSString *_internalWorkspaceIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *internalWorkspaceIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityForIdentifier:(id)a0 workspaceIdentifier:(id)a1;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)identityForIdentifier:(id)a0 workspaceIdentifier:(id)a1 internalWorkspaceIdentifier:(id)a2;
+ (id)identityForIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
