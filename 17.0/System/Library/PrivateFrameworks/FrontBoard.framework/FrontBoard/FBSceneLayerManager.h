@class NSString, NSOrderedSet, NSHashTable, FBScene;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSOrderedSet *_fbsLayers;
    NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)layerWithContextID:(unsigned int)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (id)_initWithScene:(id)a0;
- (void)_observer_didStartTrackingLayers;
- (void)_setLayers:(id)a0;
- (id)succinctDescription;
- (void)addObserver:(id)a0;
- (void)_observer_didStopTrackingLayers;

@end
