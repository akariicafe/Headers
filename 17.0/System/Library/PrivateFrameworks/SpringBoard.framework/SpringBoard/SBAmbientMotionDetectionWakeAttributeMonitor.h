@class NSHashTable;

@interface SBAmbientMotionDetectionWakeAttributeMonitor : NSObject {
    NSHashTable *_observers;
}

@property (nonatomic, setter=_setShouldEnableMotionDetectionWake:) BOOL shouldEnableMotionDetectionWake;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
