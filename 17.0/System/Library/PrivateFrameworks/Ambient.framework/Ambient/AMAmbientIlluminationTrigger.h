@class BrightnessSystemClient;
@protocol AMAmbientIlluminationTriggerDelegate;

@interface AMAmbientIlluminationTrigger : NSObject {
    BrightnessSystemClient *_brightnessSystemClient;
}

@property (nonatomic, getter=_ambientLux, setter=_setAmbientLux:) double ambientLux;
@property (nonatomic, getter=isTriggered, setter=_setTriggered:) BOOL triggered;
@property (nonatomic) double activationThresholdLux;
@property (nonatomic) double deactivationThresholdLux;
@property (weak, nonatomic) id<AMAmbientIlluminationTriggerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBrightnessSystemClient:(id)a0;
- (double)_effectiveDeactivationThresholdLux;
- (void)_evaluateTrigger;

@end
