@class NSString, NSMutableDictionary, SignpostInterval, STYUserScenario;

@interface STYScenarioReport : NSObject

@property (retain) NSString *metadata;
@property (retain) SignpostInterval *interval;
@property (retain) NSMutableDictionary *symptomsSignature;
@property (readonly) float observedLatencyInMs;
@property float targetLatencyInMs;
@property (readonly) float observedFps;
@property (readonly) float targetFps;
@property (readonly) unsigned long long scenarioStartTime;
@property (readonly) unsigned long long scenarioEndTime;
@property (readonly) NSString *issueCategory;
@property (readonly) STYUserScenario *scenario;

+ (id)reportFromSignpostEvent:(id)a0 error:(id *)a1;
+ (id)reportFromSignpostInterval:(id)a0 error:(id *)a1;

- (id)convertDictionaryToString:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignpostEvent:(id)a0 scenario:(id)a1 error:(id *)a2;
- (id)initWithSignpostInterval:(id)a0 scenario:(id)a1 error:(id *)a2;
- (id)symptomsSignatureForReport;
- (id)initWithScenario:(id)a0;

@end
