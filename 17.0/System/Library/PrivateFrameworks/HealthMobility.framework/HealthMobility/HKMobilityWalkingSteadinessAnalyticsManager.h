@class NSObject;
@protocol OS_dispatch_queue;

@interface HKMobilityWalkingSteadinessAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)submitOnboardingEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)_collectDiagnosticFieldsForNotificationMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (void)submitNotificationInteractionEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)_collectDiagnosticFieldsForNotificationInteractionMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectDiagnosticFieldsForOnboardingMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForNotificationInteractionMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForNotificationMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForOnboardingMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_isImproveHealthAndActivityAllowed;
- (id)_queue_submitNotificationEventWithDataSource:(id)a0;
- (id)_queue_submitNotificationInteractionEventWithDataSource:(id)a0;
- (id)_queue_submitOnboardingEventWithDataSource:(id)a0;
- (void)submitNotificationEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;

@end
