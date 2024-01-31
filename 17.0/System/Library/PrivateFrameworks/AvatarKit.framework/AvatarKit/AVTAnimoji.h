@class SCNNode, NSString, NSDictionary, NSURL;

@interface AVTAnimoji : AVTAvatar {
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SCNNode *lightingNode;
@property (readonly, nonatomic) SCNNode *cameraNode;

+ (BOOL)supportsSecureCoding;
+ (id)animojiNames;
+ (id)thumbnailForAnimojiNamed:(id)a0 options:(id)a1;
+ (id)animojiNamed:(id)a0;
+ (id)_sceneURLForPuppetDirectoryURL:(id)a0;
+ (id)_scenePathForPuppetNamed:(id)a0;
+ (id)animojiWithContentsOfURL:(id)a0;
+ (void)preloadAnimojiNamed:(id)a0;
+ (void)preloadPuppet:(id)a0;
+ (void)preloadPuppetNamed:(id)a0;
+ (id)puppetNamed:(id)a0 options:(id)a1;
+ (id)puppetNames;
+ (id)thumbnailForPuppetNamed:(id)a0 options:(id)a1;

- (void)loadIfNeeded;
- (void)_load;
- (void)setName:(id)a0;
- (void)update;
- (void)encodeWithCoder:(id)a0;
- (void)setUrl:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)url;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sceneURL;
- (id)avatarNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)a0;
- (id)headNode;
- (id)initWithDescriptor:(id)a0 usageIntent:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)modelNode;
- (id)newDescriptor;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (unsigned long long)usageIntent;

@end
