@class UIImage;

@interface _UIVisualEffectViewCornerMask : NSObject <NSCopying> {
    UIImage *_image;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageCenter;
    unsigned long long _appliedCorners;
    BOOL _continuous;
    BOOL _effectsEdges;
}

@property (readonly, nonatomic) double radius;

+ (id)continuousCornerMaskWithRadius:(double)a0;
+ (id)imageCornerMaskWithImage:(id)a0 radius:(double)a1;
+ (id)cornerMaskWithRadius:(double)a0 continuous:(BOOL)a1 cornerMask:(unsigned long long)a2;
+ (void)_applyZeroMaskToLayer:(id)a0;
+ (id)cornerMaskWithRadius:(double)a0;

- (id)init;
- (id)_clone;
- (id)cornerMaskAppliedToCorners:(unsigned long long)a0;
- (BOOL)_isCornerWithRadius:(double)a0 continuous:(BOOL)a1 mask:(unsigned long long)a2;
- (id)cornerMaskEffectingEdges:(BOOL)a0;
- (void).cxx_destruct;
- (void)_applyToLayer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)cornersAreContinuous;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
