@class PFSceneTaxonomy, NSString, NSMutableDictionary;

@interface CLSTaxonomyBasedModel : NSObject {
    NSMutableDictionary *_signalNodeBySignalName;
    NSMutableDictionary *_signalNodeBySignalIdentifier;
}

@property (readonly) PFSceneTaxonomy *sceneTaxonomy;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)a0;
- (id)initWithSceneTaxonomy:(id)a0;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (id)sceneIdentifiersFromSceneClassifications:(id)a0 passingThresholdOfType:(unsigned long long)a1;
- (id)sceneNamesFromSceneClassifications:(id)a0 passingThresholdOfType:(unsigned long long)a1;
- (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)a0 withThresholdType:(unsigned long long)a1;
- (BOOL)nodeIsSupported:(id)a0;
- (BOOL)nodeRefIsSupported:(void *)a0;
- (id)sceneIdentifierBySceneNameForSceneNames:(id)a0;
- (id)sceneIdentifiersForSceneNames:(id)a0 includingChildScenes:(BOOL)a1;
- (id)taxonomyNodeForName:(id)a0;
- (void *)taxonomyNodeRefForName:(id)a0;
- (void *)taxonomyNodeRefForSceneIdentifier:(unsigned int)a0;

@end
