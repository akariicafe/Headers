@class HKObserverSet, NSCalendar, HDProfile, NSString, NSDate;

@interface HDMHLoggingPatternEscalationsManager : NSObject <HDDataObserver>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (copy, nonatomic) NSCalendar *unitTest_gregorianCalendar;
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
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (BOOL)_areEscalationsSupportedAndNotSnoozedWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 featureStatus:(id)a2;
- (BOOL)_areEscalationsSnoozedWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 featureSettings:(id)a2;
- (id)_currentGregorianCalendar;
- (id)_lastEscalationAcknowledgmentDateWithFeatureSettings:(id)a0;
- (BOOL)promptedAssessment:(id *)a0 featureStatus:(id)a1 pendingStateOfMind:(id)a2 error:(id *)a3;

@end
