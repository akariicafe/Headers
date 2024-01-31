@class NSCountedSet, NSString, HDProfile, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDMedicationsWidgetSchedulingManager : NSObject <HDProfileReadyObserver, HDDataObserver, HDMedicationScheduleObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_queue_reloadReasons;
    _HKDelayedOperation *_reloadOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_reloadReasonsStringForReasons:(id)a0;
+ (id)defaultMedicationsWidgetTimelineControllerForProfile:(id)a0;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (void)_stopObservingMedicationChanges;
- (void)_queue_reloadWidgets;
- (void)_reloadWidgetIfNecessaryWithDoseEvents:(id)a0;
- (void)_runReloadOperationForReason:(long long)a0;
- (void)_startObservingMedicationChanges;
- (void)scheduleManager:(id)a0 didAddOrModifySchedules:(id)a1;
- (void)scheduleManager:(id)a0 didPruneScheduleItems:(id)a1;
- (void)scheduleManagerDidRescheduleMedications:(id)a0;

@end
