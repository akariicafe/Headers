@class SBApplication, SBSBackgroundActivityAssertion;

@interface SBAudioRecordingManager : NSObject

@property (retain, nonatomic) SBSBackgroundActivityAssertion *backgroundActivityAssertion;
@property (readonly, nonatomic) SBApplication *nowRecordingApplication;

- (id)init;
- (void)dealloc;
- (void)setNowRecordingAppForActiveAudioRecordingAttributions:(id)a0 callDescriptors:(id)a1;
- (double)_verificationDelayForApplication:(id)a0;
- (int)_pidForAttribution:(id)a0;
- (void)_verifyBackgroundAudioActivityForApplication:(id)a0 withDelay:(BOOL)a1;
- (void)_coverSheetDidPresent:(id)a0;
- (void).cxx_destruct;
- (void)verifyBackgroundAudioActivityForApplication:(id)a0;
- (BOOL)_callProviderAttributionExistsForAttribution:(id)a0 callDescriptors:(id)a1;
- (void)_removeBackgroundActivityAssertion;

@end
