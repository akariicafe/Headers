@interface HDMCSettingsMigrationStep : NSObject {
    id /* block */ _block;
}

@property (readonly, nonatomic) long long version;

+ (id)dawnMoveAlgorithmicProjectionsToFeatureSettings;
+ (id)dawnMoveHiddenCycleChartRowsSettings;
+ (id)dawnMoveHiddenLoggingRowsSettings;
+ (id)dawnMoveOnboardingTileDismissalDateToKeyValueStorage;
+ (id)dawnMoveToDeviationDetectionFeatureSettings;

- (id)description;
- (void).cxx_destruct;
- (BOOL)performStepWithUserDefaults:(id)a0 profile:(id)a1 error:(id *)a2;

@end
