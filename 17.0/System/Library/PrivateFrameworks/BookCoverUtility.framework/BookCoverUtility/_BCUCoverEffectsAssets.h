@interface _BCUCoverEffectsAssets : NSObject

@property (readonly, nonatomic) struct CGImage { } *spineNormalBlend;
@property (readonly, nonatomic) struct CGImage { } *spineLinearBurnBlend;
@property (readonly, nonatomic) struct CGImage { } *spineSoftLightBlend;
@property (readonly, nonatomic) struct CGImage { } *edges;
@property (readonly, nonatomic) struct CGColor { } *overlayColor;

- (id)initWithBundle:(id)a0 rtl:(BOOL)a1 night:(BOOL)a2 small:(BOOL)a3;
- (id)initWithBundle:(id)a0 rtl:(BOOL)a1 night:(BOOL)a2;

@end
