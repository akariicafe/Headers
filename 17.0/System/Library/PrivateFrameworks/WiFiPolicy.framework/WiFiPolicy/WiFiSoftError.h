@class NSString, NSMutableString, SDRDiagnosticReporter, NSMutableArray, NSNumber;

@interface WiFiSoftError : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long enabled;
@property (nonatomic) long long metricsEnabled;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSMutableArray *occurrenceTimestamps;
@property (retain, nonatomic) NSNumber *lastTimestamp;
@property (retain, nonatomic) NSMutableString *logMessage;
@property (retain, nonatomic) NSString *metricEventName;
@property (retain, nonatomic) SDRDiagnosticReporter *abcReporter;
@property (nonatomic) NSString *hudOffset;
@property (retain, nonatomic) NSMutableArray *abcSubmissionTimestamps;
@property (retain, nonatomic) NSMutableArray *simulateCrashTimestamps;
@property (retain, nonatomic) NSMutableArray *hudTimestamps;
@property (retain, nonatomic) NSMutableArray *askToLaunchTapToRadarTimestamps;
@property (retain, nonatomic) NSMutableArray *tapToRadarTimestamps;
@property (readonly, nonatomic) long long maxOccurrences;
@property (readonly, nonatomic) long long metricSubmissionSamplingRate;
@property (readonly, nonatomic) long long maxNonUIActions;
@property (readonly, nonatomic) long long intervalForMaxNonUIActions;
@property (readonly, nonatomic) long long maxUIActions;
@property (readonly, nonatomic) long long intervalForMaxUIActions;
@property (readonly, nonatomic) long long maxLogMessageLength;

+ (void)_updateHUDWithMessage:(id)a0;
+ (void)_cloudAssetsFetchHandler:(id)a0;
+ (void)_submitSummaryReportMetric;

- (void)_addConfigurationData:(id)a0;
- (BOOL)askToLaunchTapToRadarWithMessage:(id)a0;
- (BOOL)_maxUIActionsReachedFor:(id)a0;
- (void)dealloc;
- (void)clearLogMessage;
- (BOOL)_maxNonUIActionsReachedFor:(id)a0;
- (void)_addGenericMetricData:(id)a0;
- (long long)count;
- (BOOL)askToLaunchTapToRadarWithMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (long long)recentCountWithinTimeInterval:(double)a0;
- (id)submitABCReportWithReason:(id)a0;
- (void)writeLogMessage;
- (id)incrementCount;
- (void).cxx_destruct;
- (id)submitMetric;
- (long long)_countOf:(id)a0 withinInterval:(double)a1;
- (void)_resetCount;
- (id)tapToRadarWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_recordCurrentTimestampIn:(id)a0;
- (id)appendLogMessage:(id)a0 includeTimestamp:(BOOL)a1;
- (id)submitMetricWithData:(id)a0;
- (void)resetCount;
- (id)updateHUDWithMessage:(id)a0;
- (id)initWithName:(id)a0 andParams:(id)a1;

@end
