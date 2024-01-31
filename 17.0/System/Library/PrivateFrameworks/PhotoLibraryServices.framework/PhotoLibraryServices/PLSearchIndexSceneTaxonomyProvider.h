@class NSString, PLSearchIndexSceneTaxonomy;

@interface PLSearchIndexSceneTaxonomyProvider : NSObject

@property (retain, nonatomic) PLSearchIndexSceneTaxonomy *latestSceneTaxonomy;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomy *previousSceneTaxonomy;
@property (readonly, nonatomic) NSString *digests;

- (id)description;
- (void).cxx_destruct;
- (id)searchIndexSceneTaxonomyForSceneAnalysisVersion:(short)a0;

@end
