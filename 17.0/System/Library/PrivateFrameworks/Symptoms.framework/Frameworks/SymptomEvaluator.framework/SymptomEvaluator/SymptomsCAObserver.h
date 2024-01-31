@class AnalyticsEventObserver, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SymptomsCAObserver : NSObject <AnalyticsEventObserverDelegate> {
    AnalyticsEventObserver *_analyticsEventObserver;
}

@property (retain, nonatomic) NSMutableSet *delegates;
@property (retain, nonatomic) NSMutableSet *combinedEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)observer:(id)a0 didEmitMessage:(id)a1;
- (void)addDelegate:(id)a0 forEvents:(id)a1 withQueue:(id)a2 completion:(id /* block */)a3;
- (void)removeDelegate:(id)a0 withQueue:(id)a1 completion:(id /* block */)a2;
- (void)updateAnalyticsEventObserverRegistrationOnQueueWithCompletion:(id /* block */)a0 completionQueue:(id)a1;

@end
