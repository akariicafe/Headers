@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _standardSamplingRate;
}

+ (id)sharedInstance;

- (id)init;
- (double)samplingRateForLogType:(long long)a0;
- (void)submitWithProtobuf:(id)a0 logtype:(long long)a1;
- (id)samplingRateFromParsecBag;
- (void).cxx_destruct;

@end
