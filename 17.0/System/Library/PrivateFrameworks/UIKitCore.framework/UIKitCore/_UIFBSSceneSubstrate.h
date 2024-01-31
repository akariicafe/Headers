@class NSMapTable;

@interface _UIFBSSceneSubstrate : _UIContextBinderSubstrate {
    NSMapTable *_sceneLayerTable;
}

- (id)initWithScene:(id)a0;
- (void)attachContext:(id)a0;
- (void)detachContext:(id)a0;
- (void).cxx_destruct;

@end
