@class NSArray, NSMutableArray;

@interface IMPeople : NSObject

@property (retain, nonatomic) NSMutableArray *people;
@property (nonatomic) long long coalesceCount;
@property (readonly, nonatomic) NSArray *groups;
@property (nonatomic, setter=setShouldHidePeople:) BOOL hidePeople;
@property (readonly, nonatomic) BOOL coalescingChanges;
@property (readonly, nonatomic) unsigned long long count;

- (void)endCoalescedChanges;
- (void)dealloc;
- (void)removedIMHandle:(id)a0;
- (void)imHandle:(id)a0 buddyStatusChanged:(BOOL)a1;
- (BOOL)removePeopleFromArray:(id)a0;
- (void)addNotificationObserver:(id)a0 selector:(SEL)a1;
- (void)removeNotificationObserver:(id)a0;
- (BOOL)addIMHandle:(id)a0;
- (BOOL)addPeopleFromArray:(id)a0 skipMe:(BOOL)a1;
- (BOOL)removeIMHandle:(id)a0;
- (void).cxx_destruct;
- (void)_addedPeople:(id)a0;
- (BOOL)containsIMHandle:(id)a0;
- (void)addedIMHandle:(id)a0;
- (BOOL)addPeopleFromArray:(id)a0;
- (void)beginCoalescedChanges;

@end
