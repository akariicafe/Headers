@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {
    unsigned int _seed;
    OFEmitterView *_emitterView;
    struct CGPoint { double x; double y; } _originalEmitterPosition;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)setSettingBirthRate:(double)a0;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)setSettingSpin:(double)a0;
- (void)setSettingLifetime:(double)a0;
- (void)dealloc;
- (double)settingLifetime;
- (void)setSettingEmitterCells:(id)a0;
- (double)settingScale;
- (id)initWithWidget:(id)a0;
- (double)settingVelocity;
- (void)setSettingVelocity:(double)a0;
- (double)settingBirthRate;
- (void)setSettingScale:(double)a0;
- (id)settingEmitterCells;
- (double)settingSpin;
- (void)layoutSubviews;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingSeed:(double)a0;
- (BOOL)isEmitting;
- (void)pauseEmitter;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)resumeEmitter;
- (void)setSettingEmitterDepth:(double)a0;
- (void)setSettingEmitterMode:(id)a0;
- (void)setSettingEmitterPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingEmitterShape:(id)a0;
- (void)setSettingEmitterSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingEmitterZPosition:(double)a0;
- (void)setSettingRenderMode:(id)a0;
- (double)settingEmitterDepth;
- (id)settingEmitterMode;
- (struct CGPoint { double x0; double x1; })settingEmitterPosition;
- (id)settingEmitterShape;
- (struct CGSize { double x0; double x1; })settingEmitterSize;
- (double)settingEmitterZPosition;
- (id)settingRenderMode;
- (double)settingSeed;

@end
