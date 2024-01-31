@class HKObserverSet, HDMHPeriodicPromptedAssessmentsManager, HDProfile, NSString, HKFeatureStatusManager, HDMHLoggingPatternEscalationsManager;

@interface HDMHPromptedAssessmentsManager : NSObject <HKFeatureStatusProvidingObserver, HDMHPeriodicPromptedAssessmentsManagerObserver, HDMHLoggingPatternEscalationsManagerObserver>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HKFeatureStatusManager *periodicAssessmentsFeatureStatusManager;
@property (readonly, nonatomic) HKFeatureStatusManager *loggingPatternEscalationsFeatureStatusManager;
@property (readonly, nonatomic) HDMHPeriodicPromptedAssessmentsManager *periodicAssessmentsManager;
@property (readonly, nonatomic) HDMHLoggingPatternEscalationsManager *loggingPatternEscalationsManager;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startObserving;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void).cxx_destruct;
- (void)_stopObserving;
- (id)promptedAssessmentsWithError:(id *)a0;
- (void)_notifyObserversForPromptedAssessmentsUpdate;
- (id)initWithProfile:(id)a0 periodicAssessmentsAvailability:(id)a1 loggingPatternEscalationsAvailability:(id)a2;
- (id)initWithProfile:(id)a0 periodicAssessmentsAvailability:(id)a1 loggingPatternEscalationsAvailability:(id)a2 periodicAssessmentsManager:(id)a3 loggingPatternEscalationsManager:(id)a4;
- (void)loggingPatternEscalationsManagerDidUpdatePromptedAssessment:(id)a0;
- (void)periodicPromptedAssessmentsManagerDidUpdatePromptedAssessment:(id)a0;

@end
