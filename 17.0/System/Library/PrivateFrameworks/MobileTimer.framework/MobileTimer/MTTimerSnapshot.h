@class MTTimerStorage, NSString;

@interface MTTimerSnapshot : MTSnapshotScheduler <MTTimerObserver>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStorage:(id)a0;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void).cxx_destruct;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)source:(id)a0 didUpdateTimers:(id)a1;

@end
