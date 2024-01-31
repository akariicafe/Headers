@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}

@property unsigned long long consecutivePHSRejects;
@property double lastPHSReject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)resetVTEstimationStatistics;
- (void)incrementVTRejectCount;
- (void)resetPHSRejectCount;
- (void)increaseFalseFirstPassTriggersPerHour;
- (int)_convertToFirstPassSource:(id)a0;
- (unsigned long long)triggerCount;
- (id)getVoiceTriggerStatistics;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)getVoiceTriggerDailyMetadata;
- (void)incrementFirstPassTriggerCount;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)clearTriggerCount;
- (unsigned long long)firstPassTriggerCount;
- (void).cxx_destruct;
- (void)clearFirstPassTriggerCount;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)increaseTriggerCount;
- (void)incrementPHSRejectCount;
- (unsigned long long)getVTRejectCount;
- (double)getLastPHSRejectTime;
- (void)updateVTEstimationStatistics:(id)a0;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (unsigned long long)getPHSRejectCount;

@end
