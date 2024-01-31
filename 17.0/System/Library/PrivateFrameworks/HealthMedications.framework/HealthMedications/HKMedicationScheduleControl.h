@class NSString, HKTaskServerProxyProvider, HKObserverSet;
@protocol HKMedicationScheduleControlObserver;

@interface HKMedicationScheduleControl : NSObject <_HKXPCExportable, HKMedicationScheduleControlClient> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKMedicationScheduleControlObserver> *_observers;
}

@property (copy, nonatomic) id /* block */ unitTesting_didChangeObserverRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)taskIdentifier;
+ (id)serverInterface;

- (id)exportedInterface;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)remoteInterface;
- (void)unregisterObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_callUnitTestHookObserving:(BOOL)a0 success:(BOOL)a1 error:(id)a2;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversAboutReconnect;
- (void)_registerFirstObserver;
- (void)_unregisterLastObserver;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)_observeMedicationScheduleChanges:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_synchronouslyRegisterToObserveMedicationScheduleChangesWithError:(id *)a0;
- (void)client_notifyForAddOrModifySchedules:(id)a0;
- (void)client_notifyForDidPruneSchduleItems:(id)a0;
- (void)client_notifyForDidRescheduleMedications;
- (void)deleteSchedule:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllSchedulesWithCompletion:(id /* block */)a0;
- (void)fetchScheduleWithMedicationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchSchedulesWithMedicationIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)rescheduleMedicationsWithCompletion:(id /* block */)a0;
- (void)saveSchedule:(id)a0 completion:(id /* block */)a1;
- (void)saveScheduleItems:(id)a0 completion:(id /* block */)a1;
- (void)updateNotificationSent:(BOOL)a0 scheduleItemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)a0 completion:(id /* block */)a1;

@end
