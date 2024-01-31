@class NSObject, PFSceneTaxonomy, L2XGBRegressor;
@protocol OS_dispatch_queue;

@interface SSSodiumRanker : NSObject

@property (retain, nonatomic) L2XGBRegressor *l2XGBRegressor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_queue;
@property (nonatomic) float estimatedMaxPommesL1Score;
@property (retain, nonatomic) PFSceneTaxonomy *sceneTaxonomy;

+ (id)sharedSodiumRanker;

- (void).cxx_destruct;
- (long long)compare:(id)a0 to:(id)a1 currentTime:(double)a2;
- (double)l2XGBModelScoreForInput:(id)a0 error:(id *)a1;
- (long long)mailCompare:(id)a0 to:(id)a1 currentTime:(double)a2;
- (long long)photosCompare:(id)a0 to:(id)a1 currentTime:(double)a2;
- (void)sortAndFilterRankedItems:(id)a0 maxCount:(long long)a1 bundleID:(id)a2 userQuery:(id)a3 queryID:(long long)a4 currentTime:(double)a5;
- (void)updateScoresForItems:(id)a0 withSectionBundle:(id)a1 userQuery:(id)a2 currentTime:(double)a3 collectL2Signals:(BOOL)a4 keyboardLanguage:(id)a5;

@end
