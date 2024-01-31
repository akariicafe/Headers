@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress {
    NSArray *_children;
    NSArray *_childrenProgressObservers;
    NSObject<OS_dispatch_queue> *_childrenProgressObserversQueue;
}

- (BOOL)isIndeterminate;
- (id)initWithChildren:(id)a0;
- (void)removeProgressObserver:(id)a0;
- (void).cxx_destruct;
- (double)value;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_updateChildrenProgressObservers;
- (id)initForSubclass;

@end
