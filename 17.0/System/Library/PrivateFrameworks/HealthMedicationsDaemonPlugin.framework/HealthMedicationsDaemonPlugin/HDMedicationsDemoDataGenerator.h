@class NSString, HDProfile, NSCalendar, HDMedicationsDemoDataGeneratorState;

@interface HDMedicationsDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    NSString *_demoDataFileName;
    HDMedicationsDemoDataGeneratorState *_state;
    NSCalendar *_currentCalendar;
    BOOL isGeneratingDataOnWatch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)restoreState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_keyValueDomain;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setDemoDataGenerationContextWithProfile:(id)a0 generatorState:(id)a1;
- (BOOL)saveMedicationDoseEvents:(id)a0 error:(id *)a1;
- (void)generateDemoDataForCurrentDate:(id)a0;
- (id)scheduledDoseEventsForMedication:(id)a0 startDateTime:(id)a1 historyDayCount:(unsigned long long)a2;
- (id)_makeStableIdentifierFromScheduledDateTime:(id)a0;
- (BOOL)_saveStateWithError:(id *)a0;
- (id)_scheduleItemsForDate:(id)a0;
- (id)asNeededDoseEventsForMedication:(id)a0 startDateTime:(id)a1 historyDayCount:(unsigned long long)a2;
- (id)dailyScheduleForMedicationIdentifier:(id)a0 isAMSchedule:(BOOL)a1;
- (id)dayBeforeDate:(id)a0 withHour:(long long)a1;
- (long long)dayDifferenceFrom:(id)a0 to:(id)a1;
- (id)doseEventWithLogOrigin:(long long)a0 scheduleItemIdentifier:(id)a1 medicationIdentifier:(id)a2 scheduledDoseQuantity:(id)a3 doseQuantity:(id)a4 scheduledDate:(id)a5 startDate:(id)a6 status:(long long)a7;
- (id)doseEventsForMedication:(id)a0 startDateTime:(id)a1 historyDayCount:(unsigned long long)a2 logOrigin:(long long)a3;
- (id)doseEventsForScheduleItems:(id)a0 withStatus:(long long)a1;
- (void)generateIntitialDemoDataIfRequired;
- (BOOL)loadDemoDataObjectsFrom:(id)a0 medications:(id)a1 schedules:(id)a2 logHistory:(id)a3;
- (id)medicationWithDetail:(id)a0;
- (void)overrideMedicationShardCheck;
- (BOOL)saveMedications:(id)a0 schedules:(id)a1 logHistory:(id)a2;
- (id)scheduledDoseEventsWithCurrentDate:(id)a0;
- (BOOL)setupOntologyContentIfRequired;
- (void)updateDemoDataFileName;

@end
