@class ATXActionResponse, ATXPredictionContext;

@interface ATXActionSessionLog : NSObject {
    unsigned long long _engagementType;
    ATXActionResponse *_actionResponse;
    ATXPredictionContext *_context;
    BOOL _isShadowLog;
}

+ (double)_bucketize:(double)a0 bucketSize:(double)a1;
+ (BOOL)isLockscreenSession:(unsigned char)a0;
+ (BOOL)isLowConfidenceSession:(id)a0;
+ (BOOL)isSessionNotUsefulForTraining:(int)a0 actionResponse:(id)a1;
+ (BOOL)isSessionWithoutEngagement:(int)a0;
+ (void)logActionData:(id)a0;
+ (void)logIntentPredictionSession:(id)a0;
+ (void)performSessionLoggingWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2 isShadowLog:(BOOL)a3 forTestingMode:(BOOL)a4;
+ (double)roundedElapsedTimeWithStartDate:(id)a0 endDate:(id)a1 accuracy:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (id)constructActionDataDictionaryWithEngagedIndicesOut:(id *)a0 andAWDActionOut:(id *)a1 andEngagementTypeFound:(unsigned long long *)a2 forTestingMode:(BOOL)a3;
- (id)constructSessionLogDictionaryWithAWDSessionOut:(id *)a0 forTestingMode:(BOOL)a1;
- (id)initWithActionEngagementType:(unsigned long long)a0 actionResponse:(id)a1 context:(id)a2 isShadowLog:(BOOL)a3;
- (void)performSessionLogging:(BOOL)a0;

@end
