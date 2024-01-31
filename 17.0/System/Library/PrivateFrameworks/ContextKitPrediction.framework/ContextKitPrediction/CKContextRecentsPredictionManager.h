@class NSString, ATXProactiveSuggestionClientModel, DNDModeConfigurationService, NSObject, CKContextRecentsCache;
@protocol CKContextRecentsPredictionManagerDelegate, OS_dispatch_queue, OS_os_transaction;

@interface CKContextRecentsPredictionManager : NSObject <CKContextRecentsCacheDelegate> {
    ATXProactiveSuggestionClientModel *_clientModel;
    id /* block */ _suggestionsContributionBlock;
    id /* block */ _suggestionsClearingBlock;
    NSObject<OS_dispatch_queue> *_suggestionReportingQueue;
    DNDModeConfigurationService *_dndService;
    NSObject<OS_os_transaction> *_suggestionDonationTransaction;
}

@property (readonly, nonatomic) CKContextRecentsCache *recentsCache;
@property (weak, nonatomic) id<CKContextRecentsPredictionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_suggestionConfidenceForRecent:(id)a0 withCount:(unsigned long long)a1;
- (id)init;
- (void)_createClientModelIfNecessary;
- (void)dealloc;
- (void)didInitiatePruningMaintenanceTaskForCache:(id)a0 existingRecentsUUIDs:(id)a1;
- (void)startContributingPredictions;
- (void)_handleModeChangeToModeWithUUIDString:(id)a0 forCache:(id)a1;
- (id)eligiblePredictionsMatchingMode:(id)a0 forRecents:(id)a1 uuidsToCounts:(id)a2;
- (id)_retrieveModeConfigurations;
- (id)_localizedStringForKey:(id)a0;
- (void)modeDidChangeToModeWithUUIDString:(id)a0 forCache:(id)a1;
- (id)_recentsEligibleForDonationMatchingMode:(id)a0 fromRecents:(id)a1 uuidsToCounts:(id)a2;
- (void)stopContributingPredictions;
- (void)_updateBlendingLayerWithSuggestions:(id)a0;
- (id)_recentlyUsedStringForMode:(id)a0;
- (void).cxx_destruct;
- (void)_createDoNotDisturbServiceIfNecessary;
- (void)_clearSuggestions;
- (id)_modeForModeIdentifier:(id)a0 withConfigurations:(id)a1;
- (id)_userFacingReasonStringForRecentWithNumberOfInstances:(unsigned long long)a0 mode:(id)a1;
- (void)retrievePredictionsForMode:(id)a0 withReply:(id /* block */)a1;
- (id)_oftenUsedStringForMode:(id)a0;

@end
