@class NSString, NSMutableArray, NSDictionary;

@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject>

@property (class, readonly, nonatomic) BOOL shouldCollectPageRenderData;

@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (nonatomic) double pageRequestedTime;
@property (nonatomic) double pageAppearTime;
@property (nonatomic) double pageDisappearTime;
@property (nonatomic) double platformRequestStartTime;
@property (nonatomic) double platformResponseStartTime;
@property (nonatomic) double platformResponseEndTime;
@property (nonatomic) BOOL platformResponseWasCached;
@property (nonatomic) double platformJsonParseStartTime;
@property (nonatomic) double platformJsonParseEndTime;
@property (readonly, copy, nonatomic) NSMutableArray *domChanges;
@property (readonly, copy, nonatomic) NSMutableArray *requests;
@property (nonatomic) double resourceRequestStartTime;
@property (nonatomic) double resourceRequestOnScreenEndTime;
@property (nonatomic) double resourceRequestEndTime;
@property (nonatomic) double pageUserReadyTime;
@property (nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property (copy, nonatomic) NSDictionary *metricsBase;
@property (readonly, nonatomic, getter=isReadyForSubmission) BOOL readyForSubmission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_randomDouble;
+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)a0;
+ (BOOL)shouldCollectPageRenderDataForDocument:(id)a0;

- (id)init;
- (void)addRequest:(id)a0;
- (void).cxx_destruct;
- (void)appendPropertiesToBody:(id)a0;
- (void)addDOMChange:(id)a0;
- (void)appendMetricsBaseProperties:(id)a0;
- (void)appendSamplingPropertiesFromClientContext:(id)a0;
- (void)populateObjectInspector:(id)a0;

@end
