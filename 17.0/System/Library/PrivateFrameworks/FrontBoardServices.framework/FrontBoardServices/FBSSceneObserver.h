@class NSString, NSSet;
@protocol FBSSceneComponent, FBSSceneObserver;

@interface FBSSceneObserver : NSObject <FBSSceneObserver, FBSSceneObserverConfiguring, BSInvalidatable> {
    id<FBSSceneObserver> _observer;
    id<FBSSceneComponent> _component;
    unsigned long long _observerAddress;
    NSSet *_settings;
    NSSet *_clientSettings;
    NSSet *_actions;
    id /* block */ _settingsHandler;
    id /* block */ _clintSettingsHandler;
    id /* block */ _actionHandler;
    id /* block */ _invalidationHandler;
    BOOL _respondsToHostHandle;
    BOOL _respondsToSettings;
    BOOL _respondsToClientSettings;
    BOOL _respondsToActions;
    BOOL _respondsToInvalidate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidationHandler:(id /* block */)a0;
- (id)initWithObserver:(id)a0;
- (id)initWithComponent:(id)a0;
- (id)component;
- (void)invalidate;
- (id)observer;
- (id)scene:(id)a0 handleActions:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void)clientSettings:(SEL)a0;
- (void)actionClasses:(id)a0;
- (void)actionHandler:(id /* block */)a0;
- (void)actions:(Class)a0;
- (void)clientSettingNames:(id)a0;
- (void)clientUpdateHandler:(id /* block */)a0;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void)scene:(id)a0 didUpdateHostHandle:(id)a1;
- (void)sceneWillInvalidate:(id)a0;
- (void)settingNames:(id)a0;
- (void)settings:(SEL)a0;
- (void)updateHandler:(id /* block */)a0;

@end
