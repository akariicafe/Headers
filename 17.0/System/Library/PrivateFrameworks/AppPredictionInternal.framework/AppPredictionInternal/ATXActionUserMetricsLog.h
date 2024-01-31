@class ATXUserMetricsPBActionPredictionsMetricsLogEntry;

@interface ATXActionUserMetricsLog : NSObject <ATXUserMetricsLog> {
    ATXUserMetricsPBActionPredictionsMetricsLogEntry *_metric;
}

- (void).cxx_destruct;
- (id)scheme;
- (double)enrollmentPeriod;
- (double)enrollmentRate;
- (id)getPBCodableWithUserId:(id)a0;
- (id)initWithActionResponse:(id)a0 abGroup:(id)a1 rankOfFirstEngagement:(id)a2 currentCalendar:(id)a3;

@end
