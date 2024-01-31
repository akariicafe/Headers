@class FBSSceneIdentityToken;

@interface UIKBArbiterClientFocusContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) FBSSceneIdentityToken *sceneIdentity;
@property (retain, nonatomic) FBSSceneIdentityToken *layeringSceneIdentity;

+ (id)focusContextForSceneIdentity:(id)a0 window:(id)a1;
+ (id)focusContextForSceneIdentity:(id)a0 contextID:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
