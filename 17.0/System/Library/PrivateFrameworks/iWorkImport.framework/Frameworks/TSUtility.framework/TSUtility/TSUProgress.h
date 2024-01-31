@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgress : NSObject {
    NSMutableSet *_progressObservers;
    NSObject<OS_dispatch_queue> *_progressObserversQueue;
    NSObject<OS_dispatch_queue> *_progressObserversValueQueue;
}

@property (readonly) double value;
@property (readonly) double maxValue;
@property (readonly, getter=isIndeterminate) BOOL indeterminate;
@property (copy) NSString *message;

- (void)removeProgressObserver:(id)a0;
- (void).cxx_destruct;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (BOOL)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;
- (void)protected_progressDidChange;
- (id)initForSubclass;

@end
