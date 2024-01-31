@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)setSettingBirthRate:(float)a0;
- (BOOL)settingEnabled;
- (void)setSettingStyle:(id)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (void)parentLoaded:(id)a0;
- (float)settingLifetimeRange;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingSpin:(double)a0;
- (id)settingStyle;
- (void)setSettingLifetime:(float)a0;
- (float)settingGreenSpeed;
- (void)dealloc;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setSettingName:(id)a0;
- (id)settingMagnificationFilter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (float)settingLifetime;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)settingGreenRange;
- (void)setSettingEmitterCells:(id)a0;
- (double)settingYAcceleration;
- (void)setSettingBlueSpeed:(float)a0;
- (double)settingEmissionLongitude;
- (void)setSettingEmissionLatitude:(double)a0;
- (double)settingScale;
- (void)setSettingZAcceleration:(double)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (double)settingScaleSpeed;
- (void)setSettingColor:(id)a0;
- (double)settingVelocity;
- (float)settingBlueSpeed;
- (void)setSettingScaleRange:(double)a0;
- (id)settingContents;
- (double)settingEmissionLatitude;
- (float)settingMinificationFilterBias;
- (double)settingSpinRange;
- (double)settingVelocityRange;
- (double)settingZAcceleration;
- (float)settingAlphaSpeed;
- (void)setSettingGreenRange:(float)a0;
- (id)settingName;
- (void)setSettingVelocity:(double)a0;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingYAcceleration:(double)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (double)settingScaleRange;
- (float)settingRedSpeed;
- (float)settingBirthRate;
- (void)setSettingAlphaRange:(float)a0;
- (void)setSettingScale:(double)a0;
- (void)setSettingEmissionRange:(double)a0;
- (id)settingEmitterCells;
- (double)settingXAcceleration;
- (double)settingEmissionRange;
- (float)settingBlueRange;
- (double)settingSpin;
- (float)settingRedRange;
- (void)setSettingMinificationFilter:(id)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (float)settingAlphaRange;
- (id)initWithSettings:(id)a0;
- (id)settingColor;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingContents:(id)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingXAcceleration:(double)a0;
- (void)setSettingRedRange:(float)a0;
- (id)settingMinificationFilter;

@end
