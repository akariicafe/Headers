@class HKAnalyticsDataSource, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKAnalyticsEventSubmissionManager : NSObject {
    HKAnalyticsDataSource *_dataSource;
    id /* block */ _eventUsedProvider;
    id /* block */ _analyticsEventConsumer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void).cxx_destruct;
- (id)queue;
- (id)initWithDataSource:(id)a0 eventUsedProvider:(id /* block */)a1 analyticsEventConsumer:(id /* block */)a2 loggingCategory:(id)a3;
- (id)initWithLoggingCategory:(id)a0 healthDataSource:(id)a1;
- (void)submitEvent:(id)a0 completion:(id /* block */)a1;
- (BOOL)submitEvent:(id)a0 error:(id *)a1;

@end
