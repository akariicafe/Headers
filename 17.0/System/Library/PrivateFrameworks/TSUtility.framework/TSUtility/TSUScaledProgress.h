@class TSUScaledProgressStorage, NSObject, TSUProgress;
@protocol OS_dispatch_queue;

@interface TSUScaledProgress : TSUProgress {
    TSUScaledProgressStorage *mStorage;
    TSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property (retain) TSUProgress *progress;
@property double maxValue;

- (id)init;
- (void)dealloc;
- (BOOL)isIndeterminate;
- (void)removeProgressObserver:(id)a0;
- (double)value;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_addProgressObserverToProgressInQueue;
- (void)p_removeProgressObserverFromProgressInQueue;

@end
