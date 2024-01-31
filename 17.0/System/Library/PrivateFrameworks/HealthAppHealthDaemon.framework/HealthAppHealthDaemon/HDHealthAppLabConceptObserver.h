@class HDHAHealthPluginHostFeedGenerator, HDProfile, HDUserDomainConceptManager, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDHealthAppLabConceptObserver : NSObject <HDUserDomainConceptObserver>

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDUserDomainConceptManager *userDomainConceptManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;

- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)runBackgroundGenerationForNewUserDomainConcepts;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)debounceRunBackgroundGenerationForNewUserDomainConcepts;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (id)initWithProfile:(id)a0 debounceTime:(double)a1;
- (void).cxx_destruct;

@end
