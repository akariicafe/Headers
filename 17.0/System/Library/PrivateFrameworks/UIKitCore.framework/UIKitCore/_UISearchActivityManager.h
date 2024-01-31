@class UIScene, NSMapTable, NSString;

@interface _UISearchActivityManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) NSMapTable *_activeAssertions;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)windowHostingScene;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)_updateClientSettingsIfNecessary;
- (id)beginTrackingActiveSearchParticipant:(id)a0;

@end
