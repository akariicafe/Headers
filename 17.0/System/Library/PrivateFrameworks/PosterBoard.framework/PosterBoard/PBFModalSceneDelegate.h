@class NSString, UIWindow, NSMapTable;

@interface PBFModalSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    NSMapTable *_sceneToWindowMap;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)sceneDidDisconnect:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void).cxx_destruct;

@end
