@class NSString, NSUUID;

@interface CSEndpointDelayReporter : NSObject

@property (nonatomic) BOOL isMedocEnabled;
@property (nonatomic) double endpointTimeInMs;
@property (nonatomic) double userSpeakingStartedTimeInMs;
@property (nonatomic) double userSpeakingEndedTimeInMs;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (nonatomic) unsigned long long userSpeakingStartedHostTime;
@property (nonatomic) unsigned long long userSpeakingEndedHostTime;
@property (nonatomic) unsigned long long stopRecordingHostTime;
@property (retain, nonatomic) NSString *requestMHUUID;
@property (retain, nonatomic) NSUUID *turnIdentifier;
@property (nonatomic) BOOL didReportEndpointDelay;
@property (retain, nonatomic) NSString *curTRPId;

- (void)reset;
- (void).cxx_destruct;
- (void)_reportUEIUserSpeakingContext;
- (unsigned long long)estimatedUserSpeakingEndedHostTime;
- (unsigned long long)estimatedUserSpeakingStartedHostTime;
- (id)initWithRequestMHUUID:(id)a0 turnIdentifier:(id)a1;
- (id)initWithRequestMHUUID:(id)a0 turnIdentifier:(id)a1 withMedocEnabled:(BOOL)a2;
- (void)instrumentEndpointSignpostsForServerEndpointWithEndTime:(double)a0 leadingSilence:(double)a1 trailingSilence:(double)a2 stopRecordingMachContinuousTime:(unsigned long long)a3 skippedSamplesTimeInSec:(double)a4 firstAudioSampleSensorHostTime:(unsigned long long)a5;
- (void)reportEndpointDelayIfNeed;
- (void)setSpeechRecognizedContext:(id)a0 withEndpointerMetrics:(id)a1;
- (void)setSpeechRecognizedContext:(id)a0 withEndpointerMetrics:(id)a1 withTrpId:(id)a2;

@end
