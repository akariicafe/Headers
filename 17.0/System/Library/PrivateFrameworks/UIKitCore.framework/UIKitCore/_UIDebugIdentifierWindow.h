@class UILabel;

@interface _UIDebugIdentifierWindow : UIWindow {
    UILabel *_sceneIdentifierLabel;
}

- (id)initWithWindowScene:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (BOOL)_ignoresHitTest;
- (void)_updateSceneIdentifierLabel;

@end
