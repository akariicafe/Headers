@class PFSceneTaxonomyNode;

@interface CLSInvestigationHelperSceneNodeLevelAndWeight : NSObject

@property (readonly) PFSceneTaxonomyNode *taxonomyNode;
@property (readonly) unsigned long long level;
@property (readonly) double weight;

- (void).cxx_destruct;
- (id)initWithTaxonomyNode:(id)a0 level:(unsigned long long)a1 andWeight:(double)a2;

@end
