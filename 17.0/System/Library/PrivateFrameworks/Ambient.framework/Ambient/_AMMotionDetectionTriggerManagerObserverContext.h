@class NSObject;
@protocol OS_dispatch_queue, AMMotionDetectionTriggerManagerObserver;

@interface _AMMotionDetectionTriggerManagerObserverContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<AMMotionDetectionTriggerManagerObserver> observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 queue:(id)a1;

@end
