@class NSString, NSDate;

@interface BMLighthouseTaskTelemetry : BMEventBase <BMStoreData> {
    BOOL _hasRaw_bucketStart;
    double _raw_bucketStart;
    BOOL _hasRaw_bucketEnd;
    double _raw_bucketEnd;
    BOOL _hasRaw_latestEventTimestamp;
    double _raw_latestEventTimestamp;
}

@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSDate *bucketStart;
@property (readonly, nonatomic) NSDate *bucketEnd;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSString *taskState;
@property (readonly, nonatomic) NSDate *latestEventTimestamp;
@property (readonly, nonatomic) int countCompleted;
@property (nonatomic) BOOL hasCountCompleted;
@property (readonly, nonatomic) int countFailed;
@property (nonatomic) BOOL hasCountFailed;
@property (readonly, nonatomic) int countDeferred;
@property (nonatomic) BOOL hasCountDeferred;
@property (readonly, nonatomic) double dailyExecutionLatency;
@property (nonatomic) BOOL hasDailyExecutionLatency;
@property (readonly, nonatomic) double crossExecutionDelay;
@property (nonatomic) BOOL hasCrossExecutionDelay;
@property (readonly, nonatomic) double executionCompletionTime;
@property (nonatomic) BOOL hasExecutionCompletionTime;
@property (readonly, nonatomic) double executionFailureTime;
@property (nonatomic) BOOL hasExecutionFailureTime;
@property (readonly, nonatomic) double executionDeferralTime;
@property (nonatomic) BOOL hasExecutionDeferralTime;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(id)a0 bucketStart:(id)a1 bucketEnd:(id)a2 taskName:(id)a3 taskState:(id)a4 latestEventTimestamp:(id)a5 countCompleted:(id)a6 countFailed:(id)a7 countDeferred:(id)a8 dailyExecutionLatency:(id)a9 crossExecutionDelay:(id)a10 executionCompletionTime:(id)a11 executionFailureTime:(id)a12 executionDeferralTime:(id)a13;

@end
