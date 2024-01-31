@class NSString, RBSProcessIdentity;

@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSyncLocal) BOOL syncLocal;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityForBundleID:(id)a0;
+ (id)localIdentity;
+ (id)localIdentity:(BOOL)a0;
+ (id)identityForProcessIdentity:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)_initWithLocal:(BOOL)a0 sync:(BOOL)a1 identity:(id)a2 description:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fbs_sceneClientIdentity;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
