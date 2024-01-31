@interface SiriSetup.VoiceTrainingPresenter : NSObject <SRSTrainingManagerDelegate, AFMyriadDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataSourceWriter;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ viewStyle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ page;
    void /* unknown type, empty encoding */ AVVCRetryCount;
    void /* unknown type, empty encoding */ badMicRetryCount;
    void /* unknown type, empty encoding */ trainingInstructions;
    void /* unknown type, empty encoding */ myriadCoordinator;
    void /* unknown type, empty encoding */ voiceProfileManager;
    void /* unknown type, empty encoding */ trainingState;
    void /* unknown type, empty encoding */ trainingManager;
    void /* unknown type, empty encoding */ trainingSessionId;
}

- (void)audioLevelDidChange:(float)a0;
- (id)init;
- (void).cxx_destruct;

@end
