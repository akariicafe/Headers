@class ATXModeEntityTrialClientWrapper;

@interface ATXModeEntityModelTrialHelper : NSObject {
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)init;
- (void).cxx_destruct;
- (id)loadCoreMLModelFromTrialWithName:(id)a0;

@end
