@class HDAssertion, NSString, HKObserverSet, HKSynchronousObserverSet, _HKDelayedOperation, HDMedicationNotificationManager, NSMutableDictionary, HDProfile, NSObject, HDMedicationTimeZoneManager;
@protocol OS_dispatch_queue, HDMedicationScheduleObserver, HDMedicationScheduleSynchronousObserver;

@interface HDMedicationScheduleManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDMedicationScheduleObserver> *_observers;
    HKSynchronousObserverSet<HDMedicationScheduleSynchronousObserver> *_synchronousObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSMutableDictionary *_observersLock_pendingSchedulesBySyncIdentity;
    HDMedicationTimeZoneManager *_timeZoneManager;
    _HKDelayedOperation *_rescheduleOperation;
    long long _isOperationRequiredOnNextUnlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _operationLock;
    HDAssertion *_accessibilityAssertion;
}

@property (readonly, nonatomic) HDMedicationNotificationManager *notificationManager;
@property (copy, nonatomic) id /* block */ unitTesting_willRunRescheduleOperationWithDelay;
@property (copy, nonatomic) id /* block */ unitTesting_didRunRescheduleOperationWithDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)registerSynchronousObserver:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)medicationSchedulesWithPredicate:(id)a0 error:(id *)a1;
- (BOOL)_updateSchedulesToTimeZone:(id)a0 maintainCalendarDatesAndTimes:(BOOL)a1 error:(id *)a2;
- (BOOL)updateNotificationSent:(BOOL)a0 scheduleItemIdentifier:(id)a1 error:(id *)a2;
- (void)rescheduleMedicationsSynchronously:(BOOL)a0;
- (BOOL)enumerateMedicationSchedulesWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
- (id)medicationSchedulesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)batchNotifyObserversOnCommitOfTransaction:(id)a0 didAddOrModifySchedule:(id)a1 syncIdentity:(long long)a2;
- (BOOL)insertMedicationSchedules:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 error:(id *)a3;
- (BOOL)insertMedicationSchedule:(id)a0 error:(id *)a1;
- (BOOL)medicationSchedule:(id *)a0 identifier:(id)a1 error:(id *)a2;
- (id)medicationSchedulesWithError:(id *)a0;
- (BOOL)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)deleteMedicationSchedule:(id)a0 error:(id *)a1;
- (BOOL)medicationSchedule:(id *)a0 medicationIdentifier:(id)a1 error:(id *)a2;
- (BOOL)pruneAllScheduleItemsBeforeDate:(id)a0 createDoseEvents:(BOOL)a1 error:(id *)a2;
- (id)orderingTermsForSortDescriptors:(id)a0 error:(id *)a1;
- (void)unregisterSynchronousObserver:(id)a0;
- (BOOL)insertMedicationSchedules:(id)a0 error:(id *)a1;
- (BOOL)rescheduleMedicationsWithError:(id *)a0;

@end
