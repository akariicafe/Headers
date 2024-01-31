@class SNAudioStreamAnalyzer, NSString, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, CSVTUIEndpointAnalyzerDelegate, CSAudioFileWriter;

@interface CSVTUIEndpointAnalyzer : NSObject <SNResultsObserving>

@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) unsigned long long framePosition;
@property (nonatomic) unsigned long long nnvadState;
@property (nonatomic) unsigned long long numSamplesReceived;
@property (nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime;
@property (nonatomic) unsigned long long anchorMachAbsTime;
@property (nonatomic) BOOL isAnchorTimeBuffered;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat;
@property (nonatomic) double vtEndInSecs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) double nnvadAudioOriginInMs;
@property (nonatomic) BOOL shouldDetectTwoShot;
@property (nonatomic) BOOL didEnterTwoshot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CSAudioFileWriter> audioFileWriter;
@property (nonatomic) double firstAudioSampleSensorTimestamp;
@property (nonatomic) long long firstSampleId;
@property (nonatomic) unsigned long long numSamplesSkippedForVT;
@property (nonatomic) BOOL finishedSkippingSamplesForVT;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double endWaitTime;
@property (weak, nonatomic) id<CSVTUIEndpointAnalyzerDelegate> delegate;
@property (nonatomic) unsigned long long activeChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeStampString;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)a0;
- (id)init;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void).cxx_destruct;
- (void)handleVoiceTriggerWithActivationInfo:(id)a0;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)_checkSNObservationForEndpoint:(id)a0;
- (void)_checkSNObservationForStartpoint:(id)a0;
- (double)_effectiveAudioTimeInSecsForSNObservation:(id)a0;
- (id)_pcmBufferForAudioChunk:(id)a0;
- (void)_reportEndpointAtTsInSecs:(double)a0;
- (void)_reportStartpointAtTsInSecs:(double)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0;

@end
