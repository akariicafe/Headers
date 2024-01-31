@class NSMutableData, NSMutableArray;

@interface CSShadowMicScoreCreator : NSObject

@property (retain, nonatomic) NSMutableArray *rmsSamplesForEntireAudio;
@property (retain, nonatomic) NSMutableData *audioBuffer;
@property (nonatomic) double speechVoiceLevel;
@property (nonatomic) unsigned long long numberOfVoicingFrames;
@property (nonatomic) long long numberOfTotalFramesETFT;
@property (nonatomic) unsigned long long bestStartDetectSample;
@property (nonatomic) unsigned long long bestEarlyDetectSample;
@property (nonatomic) unsigned long long bestEndDetectSample;
@property (nonatomic) double shadowMicScore;

- (id)init;
- (void).cxx_destruct;
- (void)_calculateNumberOfVoicingFrames;
- (double)_calculateRMSWithFrameData:(short[80])a0;
- (void)_calculateSpeechVoicingLevel;
- (void)addDataToBuffer:(id)a0;
- (void)calculateShadowMicScore;

@end
