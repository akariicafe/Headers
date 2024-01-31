@interface AXMPhotoVisionSupport : NSObject

+ (void)_addNode:(id)a0 toDescription:(id)a1 atLevel:(long long)a2;
+ (id)buildGraphStatisticsDescription;
+ (id)_collectLabelsIncludingLeafNodes:(BOOL)a0 nonLeafNodes:(BOOL)a1;
+ (id)_deniedVoiceOverObjectClassificationLabels;
+ (id)_deniedVoiceOverSceneClassificationLabels;
+ (BOOL)_validatePhotosFormatSoftLinkSymbols;
+ (BOOL)axmIsSceneClassId:(unsigned int)a0 childOfSceneClassId:(unsigned int)a1;
+ (id)axmTaxonomyNodeForObjectObservation:(id)a0;
+ (id)axmTaxonomyNodeForSceneTaxonomyNode:(id)a0;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)buildTaxonomyDescription;
+ (id)findLeastCommonAncestorForSceneClassIds:(id)a0 withKnownAncestorSceneClassId:(unsigned int)a1;
+ (id)leafNodeLabels;
+ (id)localizedLabelForClassificationObservation:(id)a0;
+ (id)nonLeafNodeLabels;
+ (id)processSceneClassifications:(id)a0 withOptions:(unsigned int)a1;

@end
