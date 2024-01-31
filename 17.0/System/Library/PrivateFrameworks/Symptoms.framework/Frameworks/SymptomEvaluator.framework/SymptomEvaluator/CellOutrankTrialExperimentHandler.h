@class NSString, NSDictionary, SymptomsTrialManager, NSObject;
@protocol OS_dispatch_queue, CellOutrankTrialExperimentDelegate;

@interface CellOutrankTrialExperimentHandler : NSObject <SymptomsTrialManagerDelegate> {
    SymptomsTrialManager *_trialManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSString *treatmentID;
@property (nonatomic) BOOL waiveOutrankReason;
@property (weak, nonatomic) id<CellOutrankTrialExperimentDelegate> delegate;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)subscribeToTrialUpdates:(id)a0;
- (void)trialExperimentWithProjectIDHasBegun:(int)a0 namespaceName:(id)a1 factorName:(id)a2 treatmentID:(id)a3 trialConfiguration:(id)a4;
- (void)trialExperimentWithProjectIDHasEnded:(int)a0 namespaceName:(id)a1 factorName:(id)a2;
- (void)unsubscribeFromTrialUpdates;

@end
