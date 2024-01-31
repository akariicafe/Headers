@class NSCountedSet, NSMutableDictionary, NSSet, _UIStatusBarData;

@interface _UIStatusBarDataAggregator : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) Class dataClass;
@property (retain, nonatomic) NSCountedSet *delayedKeys;
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates;
@property (retain, nonatomic) NSMutableDictionary *coalescedKeys;
@property (retain, nonatomic) NSMutableDictionary *coalescedTimers;
@property (copy, nonatomic) _UIStatusBarData *overlayData;
@property (readonly, copy, nonatomic) NSSet *delayedEntryKeys;
@property (readonly, copy, nonatomic) NSSet *coalescedEntryKeys;

+ (void)initialize;

- (void)_updateForOverlayWithData:(id)a0;
- (id)_updatedDataFromData:(id)a0 delayedKeys:(id)a1;
- (void)updateWithData:(id)a0;
- (void)endCoalescingUpdatesForEntryKeys:(id)a0;
- (void)_coalescedUpdateForEntryKeys:(id)a0;
- (void)beginDelayingUpdatesForEntryKeys:(id)a0;
- (void)endDelayingUpdatesForEntryKeys:(id)a0;
- (void)_updateForDelayedKeysWithData:(id)a0;
- (void).cxx_destruct;
- (void)_updateForCoalescedKeysWithData:(id)a0;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (void)_updateFromPendingUpdatesForKeys:(id)a0 block:(id /* block */)a1;
- (void)beginCoalescingUpdatesForEntryKeys:(id)a0 delay:(double)a1;

@end
