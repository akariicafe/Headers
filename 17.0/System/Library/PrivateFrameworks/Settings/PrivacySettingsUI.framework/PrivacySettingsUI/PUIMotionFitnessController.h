@protocol SRRelatedSettingsProvider;

@interface PUIMotionFitnessController : PUITCCAccessController {
    id<SRRelatedSettingsProvider> _sensorKitSpecifiersProvider;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)_appSpecifiers;
- (id)valueForSpecifier:(id)a0;
- (BOOL)isFitnessTrackingEnabledFromTCC;
- (id)loadSensorKitSpecifiersProvider;
- (id)isFitnessTrackingEnabled:(id)a0;
- (void)setFitnessTrackingEnabled:(id)a0 forSpecifier:(id)a1;

@end
