@class NSString, FBSScene;

@interface _UISceneKeyboardProxyLayerForwardingHostingScene : NSObject <_UISceneKeyboardProxyLayerForwardingHostingEnvironment> {
    FBSScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addLayers:(id)a0;
- (void)removeLayers:(id)a0;

@end
