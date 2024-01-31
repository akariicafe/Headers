@class FBScene, FBSSceneIdentity, NSMutableDictionary;

@interface SBFPhysicalButtonSceneTarget : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_targetsByButton;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, nonatomic) FBSSceneIdentity *sceneIdentity;
@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)buttonTargetForButton:(unsigned long long)a0;

@end
