@class HKObserverSet, NSString, HDProtectedDataOperation, HDPrimaryProfile, NSDate, NSUserDefaults;
@protocol HDMHActivityModelProviding;

@interface HDMHTypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate, HDMHTypicalDayProviding, HDProtectedDataOperationDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDPrimaryProfile *_profile;
    HKObserverSet *_observers;
    id<HDMHActivityModelProviding> _lock_typicalDayModel;
    HDProtectedDataOperation *_operation;
    NSDate *_lock_cachedTypicalStartOfDay;
    NSDate *_lock_cachedTypicalEndOfDay;
    NSUserDefaults *_userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userStartOfDay;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)userEndOfDay;
- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)_typicalDayIntervalFromToday;
- (id)currentCalendar;
- (void).cxx_destruct;
- (id)currentDate;
- (BOOL)enumerateActivitySummariesFromDateComponents:(id)a0 toDateComponents:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)firstOnWristDateToday;
- (void)performWorkForOperation:(id)a0 profile:(id)a1 databaseAccessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (id)clientProvidedDefaultEndOfDay;
- (void)typicalDayActivityModelDidUpdate;
- (void)_updateObservers;
- (id)_defaultEndOfDayDateComponents;
- (id)_defaultStartOfDayDateComponents;
- (void)_updateTypicalDayMarkers;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1 fitnessActivityModel:(id)a2;
- (void)rebuildTypicalDayProviderForCurrentDate;
- (void)setupCachedTypicalDayMarkers;

@end
