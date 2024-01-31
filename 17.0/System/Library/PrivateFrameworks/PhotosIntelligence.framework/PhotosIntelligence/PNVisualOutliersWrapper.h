@interface PNVisualOutliersWrapper : NSObject

+ (id)requiredFetchPropertySets;
+ (BOOL)isAsset:(id)a0 similarToAnyAssets:(id)a1 withinThresholdType:(long long)a2;
+ (id)assetsDistancesSummary:(id)a0 inAssets:(id)a1 withinThresholdType:(long long)a2;
+ (id)outlierScoresForAssets:(id)a0;

@end
