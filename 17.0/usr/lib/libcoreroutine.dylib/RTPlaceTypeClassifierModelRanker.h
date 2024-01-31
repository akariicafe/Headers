@class MLModel;

@interface RTPlaceTypeClassifierModelRanker : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromMean_daily_longest_charging_duration_bucketed:(double)a0 mean_daily_longest_screen_lock_duration_bucketed:(double)a1 mean_daily_longest_uninterrupted_WiFi_connection_duration_bucketed:(double)a2 mean_daily_total_charging_duration_bucketed:(double)a3 mean_daily_total_screen_lock_duration_bucketed:(double)a4 mean_daily_total_uninterrupted_WiFi_connection_duration_bucketed:(double)a5 mean_daily_uninterrupted_WiFi_connection_stability_ratio_bucketed:(double)a6 median_daily_longest_charging_duration_bucketed:(double)a7 median_daily_longest_screen_lock_duration_bucketed:(double)a8 median_daily_longest_uninterrupted_WiFi_connection_duration_bucketed:(double)a9 median_daily_total_charging_duration_bucketed:(double)a10 median_daily_total_screen_lock_duration_bucketed:(double)a11 median_daily_total_uninterrupted_WiFi_connection_duration_bucketed:(double)a12 percentage_of_days_with_charging_bucketed:(double)a13 percentage_of_days_with_screen_lock_bucketed:(double)a14 percentage_of_days_with_uninterrupted_WiFi_connection_bucketed:(double)a15 is_iPhone:(double)a16 is_iPad:(double)a17 is_Watch:(double)a18 error:(id *)a19;

@end
