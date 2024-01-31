@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)broadcastCardSnippet:(id)a0;
- (BOOL)isTrackingObserver:(id)a0;

@end
