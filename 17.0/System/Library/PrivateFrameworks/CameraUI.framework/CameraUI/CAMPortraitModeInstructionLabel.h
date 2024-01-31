@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel

@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (nonatomic, getter=isFlashSupported) BOOL flashSupported;
@property (nonatomic) long long flashMode;
@property (nonatomic) unsigned long long numberOfPeopleFound;
@property (nonatomic) long long devicePosition;
@property (nonatomic) long long lightingType;
@property (nonatomic) long long lowLightStatus;
@property (nonatomic) long long lowLightMode;

+ (id)_textForShallowDepthOfFieldStatus:(long long)a0 numberOfPeopleFound:(unsigned long long)a1 flashSupported:(BOOL)a2 flashMode:(long long)a3 devicePosition:(long long)a4 lightingType:(long long)a5 lowlightMode:(long long)a6 lowLightStatus:(long long)a7;
+ (BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextWithPriorStatus:(long long)a0;

@end
