@class NSString;

@interface SGEnrichmentWritebackAdapter : NSObject <SGJournalCalendarObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_index;
+ (id)_attributeSetForEvent:(id)a0;
+ (BOOL)_isEligibleEvent:(id)a0;

- (void)addEvents:(id)a0;
- (void)addEvent:(id)a0;
- (void)calendarDeleted;
- (id)_deleteEventsMatchingEvent:(id)a0 keepingNewerEvents:(BOOL)a1;
- (id)_deleteEventsMatchingGroupId:(id)a0 fallbackGroupId:(id)a1 olderThanDate:(id)a2;
- (id)_uniqueIdentifiersMatchingEvent:(id)a0 olderThanDate:(id)a1;
- (id)_uniqueIdentifiersMatchingGroupId:(id)a0 fallbackGroupId:(id)a1 olderThanDate:(id)a2;
- (void)cancelEvent:(id)a0;
- (void)cancelEvents:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (void)orphanEvent:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;

@end
