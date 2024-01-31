@class NSData, _TtC3VFX9VFXEffect, NSMutableArray;
@protocol VFXBinding;

@interface PTVFXRenderEffectBinding : NSObject {
    float _forceFadeOutStart;
}

@property (retain, nonatomic) _TtC3VFX9VFXEffect *effect;
@property (retain, nonatomic) id<VFXBinding> positionBinding;
@property (retain, nonatomic) id<VFXBinding> backgroundDimmingBinding;
@property (retain, nonatomic) NSMutableArray *opacityBindings;
@property (retain, nonatomic) NSData *opacityValue;
@property BOOL useBackgroundDimming;
@property float duration;
@property (retain, nonatomic) id<VFXBinding> durationBinding;
@property double creationTimeSeconds;
@property unsigned long long effectType;
@property float emitZValue;
@property struct { void /* unknown type, empty encoding */ columns[4]; } inverseCameraProjection;
@property (readonly) float dimmingFactor;
@property (readonly) BOOL active;
@property BOOL useCircularGradient;

+ (void)setRawValue:(id)a0 onBinding:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)forceFadeOut:(double)a0;
- (void /* unknown type, empty encoding */)screenSpaceToCameraSpace:(SEL)a0;
- (int)updateBackgroundDimming:(float)a0;
- (int)updateWithEvent:(id)a0 time:(double)a1;

@end
