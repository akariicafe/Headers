@class CSUMetricOperatingPointCurve, NSArray, NSString, CSUSceneNetV5SceneTaxonomy;

@interface CSUSceneNetV5SceneLabelAttributes : CSULabelAttributes {
    void *_node;
    CSUMetricOperatingPointCurve *_operatingPointsForPrecisions;
    CSUMetricOperatingPointCurve *_operatingPointsForRecalls;
    CSUMetricOperatingPointCurve *_operatingPointsForMaximalFScoreAtBetas;
    CSUSceneNetV5SceneTaxonomy *_parentTaxonomy;
}

@property (readonly, nonatomic) BOOL isSearchable;
@property (readonly, nonatomic) float photosSearchThreshold;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSArray *objectDetectorLabels;
@property (readonly, copy, nonatomic) NSArray *humanReadableSynonyms;
@property (readonly, copy, nonatomic) NSString *humanReadableLabel;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *precisionOperatingPointCurve;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *recallOperatingPointCurve;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *betaFScoreMaximizingOperatingPointCurve;

- (void).cxx_destruct;
- (id)initWithSceneNetSceneCategoryAttributes:(void *)a0 withParentTaxonomy:(id)a1;

@end
