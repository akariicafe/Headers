@class UIScene;

@interface _UIFocusActiveSceneObserver : _UIFocusStateObserver {
    UIScene *_scene;
}

- (id)init;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (id)_initWithScene:(id)a0;
- (void)beginMonitoringContextChangesForWindow:(id)a0;
- (void)stopMonitoringContextChangesForWindow:(id)a0;

@end
