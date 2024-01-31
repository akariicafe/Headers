@class NSNumber, BioLog;

@interface MesaCoreAnalyticsEvent : BiometricKitCoreAnalyticsEvent {
    BOOL _fingerOn;
    BioLog *_bioLog;
    NSNumber *_previousDeviceType;
    struct { unsigned int type; unsigned char uuid[16]; } _lastBioDevice;
}

@property (readonly) NSNumber *fingerDetected;
@property (retain) NSNumber *builtinSensorType;
@property (retain) NSNumber *sensorType;
@property (retain, nonatomic) NSNumber *deviceType;
@property (retain) NSNumber *deviceGroupType;
@property (retain) NSNumber *deviceOrientation;
@property (retain) NSNumber *template1MatchCount;
@property (retain) NSNumber *template2MatchCount;
@property (retain) NSNumber *template3MatchCount;
@property (retain) NSNumber *template4MatchCount;
@property (retain) NSNumber *template5MatchCount;
@property (retain) NSNumber *template1Usage;
@property (retain) NSNumber *template2Usage;
@property (retain) NSNumber *template3Usage;
@property (retain) NSNumber *template4Usage;
@property (retain) NSNumber *template5Usage;
@property (retain) NSNumber *activeTemplatesCount;
@property (retain) NSNumber *enrolledTemplatesCount;
@property (retain) NSNumber *totalTemplateMatchCount;
@property (retain) NSNumber *template1MatchCountContinuous;
@property (retain) NSNumber *template2MatchCountContinuous;
@property (retain) NSNumber *template3MatchCountContinuous;
@property (retain) NSNumber *template4MatchCountContinuous;
@property (retain) NSNumber *template5MatchCountContinuous;
@property (retain) NSNumber *template1UsageContinuous;
@property (retain) NSNumber *template2UsageContinuous;
@property (retain) NSNumber *template3UsageContinuous;
@property (retain) NSNumber *template4UsageContinuous;
@property (retain) NSNumber *template5UsageContinuous;
@property (retain) NSNumber *totalTemplateMatchCountContinuous;

- (void)reset;
- (void)logAnalyticsDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEvent;
- (void)setMatchCounts:(id)a0 totalMatchCount:(unsigned long long)a1;
- (void)setMatchCountsFromIdentityList:(id)a0;
- (void)handleStatusMessage:(unsigned int)a0 withData:(id)a1;
- (void)setFingerDetected:(id)a0;
- (void)setMatchCountsContinuous:(id)a0 totalMatchCount:(unsigned long long)a1;
- (void)updateBioLog:(id)a0;

@end
