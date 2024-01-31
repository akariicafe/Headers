@class REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineLogger : NSObject {
    REObserverStore *_loggables;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeLoggable:(id)a0;
- (void)addLoggable:(id)a0;
- (void)collectLogs:(id /* block */)a0 completion:(id /* block */)a1;
- (void)enumerateLoggables:(id /* block */)a0;

@end
