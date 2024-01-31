@class HKObserverSet, NSCalendar, HDProfile, NSString, NSDate, NSUserDefaults;

@interface HDMHPeriodicPromptedAssessmentsManager : NSObject <HDDataObserver>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (copy, nonatomic) NSCalendar *unitTest_gregorianCalendar;
@property (retain, nonatomic) NSUserDefaults *cadenceOverrideDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_startObserving;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)_currentDate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (id)_promptedAssessmentEligibilityStartDateWithFeatureStatus:(id)a0 error:(id *)a1;
- (id)_currentGregorianCalendar;
- (id)_lastPromptAcknowledgmentDateWithFeatureSettings:(id)a0;
- (id)_mostRecentAssessmentDateWithError:(id *)a0;
- (id)_mostRecentAssessmentInteractionDateWithFeatureSettings:(id)a0 error:(id *)a1;
- (id)_mostRecentSampleStartDateForSampleType:(id)a0 error:(id *)a1;
- (long long)_periodicAssessmentPromptCadenceInDays;
- (BOOL)promptedAssessment:(id *)a0 featureStatus:(id)a1 error:(id *)a2;

@end
