@class PMMPredictionNotification, NSDictionary, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXMagicalMomentsUpdateMonitor : NSObject {
    NSDictionary *_predictionMap;
    NSDate *_expiration;
    unsigned long long _mmPredictionCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    PMMPredictionNotification *_mmUpdateListener;
}

@property (readonly, nonatomic) unsigned long long limit;

- (void)updatePredictionsWith:(id)a0 consumer:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)mmPredictionCount;
- (void)dropCacheIfExpired;
- (id)predictionsForBundleId:(id)a0;
- (id)initWithLimit:(unsigned long long)a0;
- (void)setupUpdateListener;
- (void)_setPredictions:(id)a0 expiration:(id)a1 totalPredictionCount:(unsigned long long)a2;

@end
