@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NFBackgroundActivityScheduler : NSObject

@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *activityMap;

- (id)initWithQueue:(id)a0;
- (void)unregisterActivity:(id)a0;
- (void).cxx_destruct;
- (void)registerActivity:(id)a0 identifier:(id)a1;
- (void)schedulePreRegisteredActivity:(id)a0 callback:(id /* block */)a1;
- (id)getActivity:(id)a0;
- (void)backgroundActivityScheduler:(id)a0 interval:(double)a1 tolerance:(double)a2 repeats:(BOOL)a3 qualityOfService:(long long)a4 delay:(double)a5 callback:(id /* block */)a6;

@end
