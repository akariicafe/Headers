@class PPConnectionsFoundInAppsSource, PPConnectionsPasteboardSource, PPConnectionsMetricsTracker, PPConnectionsCalendarSource, PPConnectionsNamedEntitySource, PPConnectionsDuetSource, NSObject, PPConnectionsParameters;
@protocol OS_dispatch_queue;

@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsParameters *_parameters;
    PPConnectionsPasteboardSource *_pasteboardSource;
    PPConnectionsCalendarSource *_calendarSource;
    PPConnectionsDuetSource *_duetSource;
    PPConnectionsNamedEntitySource *_namedEntitySource;
    PPConnectionsFoundInAppsSource *_fiaSource;
    PPConnectionsMetricsTracker *_metricsTracker;
    NSObject<OS_dispatch_queue> *_predictionQueue;
}

+ (id)defaultStore;

- (id)init;
- (id)initWithParameters:(id)a0 pasteboardSource:(id)a1 calendarSource:(id)a2 duetSource:(id)a3 namedEntitySource:(id)a4 fiaSource:(id)a5 metricsTracker:(id)a6;
- (id)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 timeout:(unsigned long long)a4 error:(id *)a5;
- (void).cxx_destruct;

@end
