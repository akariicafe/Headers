@class PETScalarEventTracker, PETGoalConversionEventTracker;

@interface TIConnectionsMetricsTracker : NSObject

@property (retain, nonatomic) PETScalarEventTracker *textFieldEntryTracker;
@property (retain, nonatomic) PETGoalConversionEventTracker *predictionEngagementTracker;
@property BOOL inputContextDidChange;

+ (id)sharedInstance;

- (void)trackPredictionEngagmentWithConversion:(BOOL)a0 age:(unsigned long long)a1 fieldType:(id)a2 resultType:(id)a3 fromBundleId:(id)a4 targetApp:(id)a5 linguistic:(BOOL)a6 semantic:(BOOL)a7;
- (id)init;
- (void)trackTextFieldEntryWithEmpty:(BOOL)a0 fieldType:(id)a1 trigger:(id)a2;
- (void)trackTextFieldEntryWithEmpty:(BOOL)a0 fieldType:(id)a1 linguistic:(BOOL)a2 semantic:(BOOL)a3 requestType:(id)a4;
- (BOOL)isIgnoredTrigger:(id)a0;
- (void).cxx_destruct;

@end
