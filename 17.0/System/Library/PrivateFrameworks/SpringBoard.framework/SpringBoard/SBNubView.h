@class UIApplicationSceneClientSettingsDiffInspector, NSString, SBDeviceApplicationSceneHandle, UIView;

@interface SBNubView : SBFTouchPassThroughView <SBDeviceApplicationSceneHandleObserver> {
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    UIView *_nubView;
}

@property (class, readonly, nonatomic) double hitTestPadding;
@property (class, readonly, nonatomic) double hitTestWidth;
@property (class, readonly, nonatomic) double height;
@property (class, readonly, nonatomic) double contentHeight;

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateNubViewBackgroundColor;
- (void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;

@end
