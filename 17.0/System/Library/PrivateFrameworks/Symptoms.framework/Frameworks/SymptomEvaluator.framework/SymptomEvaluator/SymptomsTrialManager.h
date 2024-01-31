@class NSString, NSMutableSet, TRIClient, NSObject;
@protocol TRINotificationToken, OS_dispatch_queue;

@interface SymptomsTrialManager : NSObject {
    int _trialProjectID;
    NSString *_trialNamespaceName;
    NSString *_trialFactorName;
    TRIClient *_trialClient;
    id<TRINotificationToken> _trialToken;
    NSMutableSet *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateTreatment;
- (id)initWithTrialProjectID:(int)a0 namespaceName:(id)a1 factorName:(id)a2 queue:(id)a3;
- (void)notifyRegisteredClientsForExperimentEnd;
- (void)notifyRegisteredClientsForExperimentStart:(id)a0 trialExperimentIdentifiers:(id)a1;
- (id)readParametersFromPlist:(id)a0;
- (void)subscribeToTrialUpdates;
- (void)unsubscribeFromTrialUpdates;

@end
