@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    BOOL _forSceneNetOnly;
}

- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForIdentifier:(unsigned int)a0;
- (id)rootNode;
- (id)initForSceneNetOnly:(BOOL)a0;
- (id)nodeForName:(id)a0;
- (void).cxx_destruct;

@end
