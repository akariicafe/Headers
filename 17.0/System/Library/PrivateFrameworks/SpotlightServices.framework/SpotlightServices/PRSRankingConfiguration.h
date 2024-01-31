@class NSDictionary, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, NSNumber, SSPlistDataReader;

@interface PRSRankingConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mutex;
}

@property (retain, nonatomic) NSMutableDictionary *categoryEngagements;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSMutableDictionary *queryDependentCategoryProbabilities;
@property (retain, nonatomic) SSPlistDataReader *queryIndependentCategoryProbabilities;
@property (retain, nonatomic) NSNumber *localResultQualityThreshold;
@property (retain, nonatomic) NSMutableOrderedSet *cepBlocklistSet;
@property (retain, nonatomic) NSArray *parsecCategoryOrder;
@property (retain, nonatomic) NSString *shortcutSectionBundleID;
@property (nonatomic) BOOL allow_coreduet_influence;
@property (retain, nonatomic) NSDictionary *sqfData;
@property (retain, nonatomic) NSDictionary *serverFeatures;
@property (nonatomic) BOOL disableResultTruncation;
@property (nonatomic) float numAppsDeduped;

- (id)init;
- (void)lock;
- (void)unlock;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (void)appendToExistingCEPBlocklist:(id)a0;
- (float)engagementProbabilityForCategory:(id)a0;
- (float)maxEngagementProbability;
- (double)queryDependentProbabilityForCategory:(id)a0;
- (double)queryIndependentProbabilityForCategory:(id)a0;
- (void)updateQueryDependentProbabilityAndBlocklistSetWith:(id)a0;
- (void)updateWithSQFData:(id)a0;

@end
