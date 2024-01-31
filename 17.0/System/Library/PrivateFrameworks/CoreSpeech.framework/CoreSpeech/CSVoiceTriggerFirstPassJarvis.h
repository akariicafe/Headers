@class CSOtherAppRecordingStateMonitor, CSKeywordAnalyzerNDEAPIResult, NSObject, CSKeywordAnalyzerNDEAPI, CSSpeechManager, NSMutableArray, CSVoiceTriggerSecondChanceContext, CSAudioStream, CSVoiceTriggerSecondPass, NSString, CSVoiceTriggerRTModel, CSAudioProvider, CSVoiceTriggerFirstPassMetrics, CSSPGEndpointAnalyzer, CSPlainAudioFileWriter, CSAsset, CSAudioStreamHolding, CSVoiceTriggerUserSelectedPhrase;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) BOOL hasReceivedNDEAPIResult;
@property (nonatomic) BOOL hasTriggerCandidate;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic) unsigned long long jarvisVoiceTriggerTimeout;
@property (nonatomic) unsigned long long activeChannel;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPIResult *jarvisTriggerResult;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic) long long latestTriggerMode;
@property (retain, nonatomic) CSSPGEndpointAnalyzer *endpointAnalyzer;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) CSVoiceTriggerRTModel *rtModel;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) BOOL isSiriClientListening;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic) BOOL firstTimeAssetConfigured;
@property (retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer;
@property (retain, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (retain, nonatomic) CSVoiceTriggerUserSelectedPhrase *multiPhraseSelectedStatus;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeStampString;
+ (id)jarvisAudioLogDirectory;
+ (id)jarvisAudioLoggingFilePath;

- (void)_setAsset:(id)a0;
- (id)init;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)reset;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)_reset;
- (void)start;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (void)_handleSecondPassResult:(id)a0 deviceId:(id)a1 error:(id)a2;
- (void)_handleAudioChunk:(id)a0;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)setAsset:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)keywordAnalyzerNDEAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_notifyJarvisVoiceTriggerReject;
- (void)_cancelAudioStreamHold;
- (void)_clearTriggerCandidate;
- (void)_createSecondPassIfNeeded;
- (void)_didDetectKeywordFromDeviceId:(id)a0 activationInfo:(id)a1 triggerHostTime:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_didStartAudioStream;
- (void)_didStopAudioStream;
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)a0 activationInfo:(id)a1 triggerHostTime:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_holdAudioStreamWithTimeout:(double)a0;
- (void)_reportJarvisVoiceTriggerFire;
- (void)_requestStartAudioStreamWitContext:(id)a0 startStreamOption:(id)a1 completion:(id /* block */)a2;
- (void)_teardownSecondPass;
- (id)initWithSpeechManager:(id)a0 otherAppRecordingStateMonitor:(id)a1;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)a0;

@end
