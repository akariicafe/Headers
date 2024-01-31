@interface HealthMedicationsExperience.MedicationScheduleControlObserver : NSObject <HKMedicationScheduleControlObserver> {
    void /* unknown type, empty encoding */ observerOptions;
    void /* unknown type, empty encoding */ scheduleChangedSubject;
}

- (id)init;
- (void).cxx_destruct;
- (void)scheduleControl:(id)a0 didAddOrModifySchedules:(id)a1;
- (void)scheduleControlDidRescheduleItems;

@end
