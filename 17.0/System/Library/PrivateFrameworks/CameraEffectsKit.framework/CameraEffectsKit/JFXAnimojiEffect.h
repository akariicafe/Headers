@class UIImage;

@interface JFXAnimojiEffect : JFXEffect

@property (readonly, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long captureInterfaceOrientation;

+ (BOOL)supportsSecureCoding;
+ (id)animojiIDs;
+ (id)createAnimojiEffectForID:(id)a0;
+ (id)createMemojiEffectWithContentsOfFile:(id)a0 identifier:(id)a1;
+ (BOOL)isAvatarKitAvailable;

- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (int)type;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)renderEffect;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x0; double x1; } *)a0 numPoints:(unsigned long long)a1 fromBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 basisOrigin:(int)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformFromEffectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 basisOrigin:(int)a2;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x0; double x1; } *)a0 numPoints:(unsigned long long)a1 toBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 basisOrigin:(int)a3;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })_convertRenderEffectPoints:(struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0 toBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basisOrigin:(int)a2;
- (unsigned long long)avatarVersionNumber;
- (BOOL)loadRenderEffect;
- (void)loadRenderEffectInBackgroundWithCompletionOnMainQueue:(id /* block */)a0;
- (void)loadRenderEffectOnQueue:(id)a0 completion:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basisOrigin:(int)a1;

@end
