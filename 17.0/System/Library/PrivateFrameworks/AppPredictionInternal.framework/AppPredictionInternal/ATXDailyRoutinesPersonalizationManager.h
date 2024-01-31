@class ATXContextualActionManager;
@protocol ATXLocationOfInterestManagerProtocol;

@interface ATXDailyRoutinesPersonalizationManager : NSObject {
    ATXContextualActionManager *_actionManager;
    id<ATXLocationOfInterestManagerProtocol> _loiManager;
}

+ (id)sharedInstance;
+ (id)_filterActions:(id)a0 havingCounts:(id)a1 includeBundleIds:(id)a2 excludeBundleIds:(id)a3 includeActionTypes:(id)a4 excludeActionTypes:(id)a5 havingMinOccurrences:(unsigned long long)a6;
+ (id)_filterUnpackedActions:(id)a0;
+ (id)_rankActions:(id)a0 havingCounts:(id)a1;
+ (id)_unpackMostFrequentActionParameters:(id)a0 havingCounts:(id)a1 limit:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_getMostFrequentActionsForContext:(id)a0 includeBundleIds:(id)a1 excludeBundleIds:(id)a2 includeActionTypes:(id)a3 excludeActionTypes:(id)a4 minOccurrences:(unsigned long long)a5 limit:(unsigned long long)a6;
- (id)initWithFakeActions:(id)a0 loiManager:(id)a1;
- (BOOL)_allRequiredActionTypesPresent:(id)a0 minOccurrences:(unsigned long long)a1 forContext:(id)a2;
- (BOOL)_enoughActionHistory;
- (id)getActionPredictionsForContext:(id)a0 includeBundleIds:(id)a1 excludeBundleIds:(id)a2 includeActionTypes:(id)a3 excludeActionTypes:(id)a4 limit:(unsigned long long)a5;
- (BOOL)shouldDisplayDailyRoutineForContext:(id)a0;

@end
