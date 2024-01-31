@class NSString;
@protocol _SFSettingsAlertStepperConfiguration;

@interface _SFSiriReaderPlaybackPositionAndStateController : NSObject <_SFSettingsAlertStepperController> {
    BOOL _isPlaying;
    id<_SFSettingsAlertStepperConfiguration> _stepper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)decrementValue:(id)a0;
- (void)incrementValue:(id)a0;
- (void)prepareStepper:(id)a0;
- (void)resetValue:(id)a0;

@end
