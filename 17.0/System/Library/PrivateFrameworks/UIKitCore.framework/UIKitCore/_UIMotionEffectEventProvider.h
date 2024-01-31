@protocol _UIMotionEffectEventConsumer;

@interface _UIMotionEffectEventProvider : NSObject

@property id<_UIMotionEffectEventConsumer> consumer;

- (BOOL)shouldLogEvents;
- (double)slowUpdateIntervalForLogs;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)fastUpdateIntervalForLogs;
- (void)stopGeneratingEvents;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (BOOL)wantsSynchronizedUpdates;

@end
