@class NSString, HDProfile, HDKeyValueDomain, NSObject;
@protocol OS_dispatch_queue, HKFeatureStatusProviding;

@interface HDHRAFibBurdenRescindedNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver> {
    HDProfile *_profile;
    id<HKFeatureStatusProviding> _featureStatusProvider;
    HDKeyValueDomain *_localKeyValueDomain;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTesting_postNotificationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (void)dealloc;
- (void)_showRescindedNotificationWithTitleKey:(id)a0 bodyKey:(id)a1;
- (void)_queue_pullFeatureStatusAndPresentAlertIfNeeded;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void)_queue_presentRescindedOrReEnabledAlertIfNeededWithFeatureStatus:(id)a0;
- (BOOL)_isFeatureRescindedWithRequirementsEvaluation:(id)a0;
- (id)_rescindedAlertTitleKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (void)_sendNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1;
- (id)_rescindedAlertBodyKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1 keyValueDomain:(id)a2;
- (id)_rescindedRequirementIdentifiers;
- (BOOL)_isFeatureUnavailableForNonRescindedReasonsWithRequirementsEvaluation:(id)a0;

@end
