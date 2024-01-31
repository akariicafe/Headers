@class UIFont, NSString, _UIStatusBarVisualProvider_PillRegionCoordinator, _UIStatusBar;

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS <_UIStatusBarPillRegionVisualProvider>

@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)willUpdateWithData:(id)a0;

@end
