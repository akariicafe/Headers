@class NSString, NSObject;
@protocol CKVPriorRetriever;

@interface CKVSpeechItemRanker_Contact : CKVSpeechItemRanker {
    NSObject<CKVPriorRetriever> *_priorRetriever;
    NSString *_trialExperimentBoostingStrategy;
    BOOL _trialTreatmentActive;
}

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (void)_activateEnrolledTrialExperiments;
- (BOOL)addDataset:(id)a0;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActiveTrialExperimentIds;
- (id)initWithDatabase:(id)a0 priorRetriever:(id)a1;
- (BOOL)trialTreatmentApplied;

@end
