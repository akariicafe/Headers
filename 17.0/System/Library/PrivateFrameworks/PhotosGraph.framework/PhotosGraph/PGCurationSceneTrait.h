@class NSSet, CLSSceneConfidenceThresholdHelper;

@interface PGCurationSceneTrait : PGCurationTrait {
    CLSSceneConfidenceThresholdHelper *_helper;
}

@property (readonly) NSSet *sceneNames;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (void).cxx_destruct;
- (BOOL)isActive;
- (id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)a0;
- (id)initWithSceneNames:(id)a0;

@end
