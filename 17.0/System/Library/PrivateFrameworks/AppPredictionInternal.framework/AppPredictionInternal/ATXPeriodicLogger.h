@class NSArray, NSDate;

@interface ATXPeriodicLogger : NSObject {
    NSArray *_sources;
    NSDate *_lastSent;
    double _uploadInterval;
    BOOL _enrolled;
    NSDate *_lastEnrolled;
    double _enrollmentRate;
    double _enrollmentPeriod;
}

+ (double)getEnrollmentRate;
+ (id)readDateFromDefaultsForKey:(id)a0;
+ (BOOL)readEnrollmentFromDefaults;
+ (id)readLastEnrolledFromDefaults;
+ (id)readLastSentFromDefaults;

- (id)init;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)getLastEnrolled;
- (id)initWithSources:(id)a0 uploadInterval:(double)a1 enrollmentPeriod:(double)a2 enrollmentRate:(double)a3;
- (void)clearUserId;
- (id)compileAndSendMetrics:(id)a0;
- (id)compileLog;
- (id)convertDictionaryToDataUnits:(id)a0;
- (BOOL)determineEnrollment;
- (id)generateUserId;
- (BOOL)getEnrollment;
- (id)getLastSent;
- (id)getUserId;
- (BOOL)hasEnrollmentExpired:(id)a0;
- (BOOL)isItTimeYet:(id)a0;
- (void)overrideEnrollmentRate:(double)a0;
- (id)sendMetricsAtThisTime:(id)a0;
- (void)sendMetricsIfNeeded;
- (id)sendMetricsIfNeededAtThisTime:(id)a0;
- (void)setEnabledOnSourcesTo:(BOOL)a0;
- (void)setEnrollment:(BOOL)a0;
- (void)setLastEnrolledToTime:(id)a0;
- (void)setLastSentToTime:(id)a0;

@end
