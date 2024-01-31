@interface PAAccessPublisherPipelines : NSObject

+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)a0;
+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)a0 withBundleLookup:(id /* block */)a1;
+ (id)accessPublisherWithoutOutOfProcessPickerAccesses:(id)a0;
+ (id)accessPublisherWithoutUnknownCategoryAccesses:(id)a0;
+ (id)accessRecordsFromPublisher:(id)a0;
+ (id)accessRecordsFromPublisher:(id)a0 reversed:(BOOL)a1;
+ (id)coalesceAccessRecordsFromPublisher:(id)a0 withCoalescingWindowDuration:(double)a1 reversed:(BOOL)a2;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)a0 nextAccessPublisher:(id /* block */)a1;
+ (id)completeAccessRecordFromPartialAccessRecord:(id)a0 nextStartTime:(id /* block */)a1 accessPublisher:(id /* block */)a2;
+ (id)findBeginningForPartialAccessRecord:(id)a0 iteration:(double)a1 nextStartTime:(id /* block */)a2 endTime:(double)a3 accessPublisher:(id /* block */)a4;
+ (double)nextStartTimeForEndTime:(double)a0 iteration:(double)a1;
+ (id)ongoingAccessRecordsFromPublisher:(id)a0;

@end
