@class IMBalloonPlugin, CKSnapshotCacheKey, UIView;

@interface CKBrowserSwitcherCell : UIView

@property (retain, nonatomic) UIView *browserSnapshotView;
@property (retain, nonatomic) UIView *extensionInterruptedView;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) CKSnapshotCacheKey *snapshotCacheKey;
@property (nonatomic, getter=isUsingFallbackSnapshot) BOOL usingFallbackSnapshot;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPlugin:(id)a0 withSnapshotCacheKey:(id)a1;
- (void)_handleBrowserSnapshotDidChange:(id)a0;
- (void)_updateSnapshotView;
- (id)balloonPluginManager;
- (void)showExtensionInterruptedViewWithDisplayName:(id)a0;

@end
