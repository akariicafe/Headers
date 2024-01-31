@class FBSDisplayConfiguration, _PRPosterStagedSceneSettings, UITraitCollection;

@interface PRPosterSceneSettingsBuilder : NSObject {
    _PRPosterStagedSceneSettings *_sceneSettings;
}

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long snapshotOptions;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (id)buildWithPath:(id)a0 provider:(id)a1 configuredProperties:(id)a2 snapshotDefinition:(id)a3;
- (void)applySceneSettings:(id /* block */)a0;
- (void)applySnapshotDefinition:(id)a0;
- (id)buildWithPath:(id)a0 snapshotDefinition:(id)a1;

@end
