@class NSOperationQueue, CMMotionManager;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (BOOL)shouldLogEvents;
- (id)init;
- (void)dealloc;
- (double)slowUpdateIntervalForLogs;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)fastUpdateIntervalForLogs;
- (void)stopGeneratingEvents;
- (void).cxx_destruct;
- (id)currentEvent;
- (void)startGeneratingEvents;

@end
