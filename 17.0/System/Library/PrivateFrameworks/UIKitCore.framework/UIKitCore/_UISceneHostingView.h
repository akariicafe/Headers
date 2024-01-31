@class UITraitCollection, NSString, UIColor, UILabel, _UISceneHostingController;
@protocol UIScenePresenter;

@interface _UISceneHostingView : UIView <_UIGeometryChangeObserver, _UISceneHostingSettingsProviding> {
    _UISceneHostingController *_sceneHostingController;
    UITraitCollection *_currentTraitCollection;
    UIColor *_currentTintColor;
    struct CGSize { double width; double height; } _currentSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _currentSafeAreaInsets;
    BOOL _currentShouldUseHostCornerRadius;
    UILabel *_debugLabel;
}

@property (readonly, nonatomic) id<UIScenePresenter> _scenePresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_applyOverridesToHostedSceneSettings:(id)a0;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)layoutSubviews;
- (id)initWithSceneHostingController:(id)a0;
- (void)_prepareForWindowHostingSceneRemoval;
- (BOOL)_shouldUseHostCornerRadius;
- (void)requestSceneSettingsUpdateIfNecessary;
- (void)setPresentedScene:(id)a0;
- (void)windowDidMoveToScene:(id)a0;

@end
