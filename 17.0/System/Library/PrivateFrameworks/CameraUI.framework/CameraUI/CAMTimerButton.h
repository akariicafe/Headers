@class UIImageView, NSString;
@protocol CAMTimerButtonDelegate;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (weak, nonatomic) id<CAMTimerButtonDelegate> delegate;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL hideOffWhenCollapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForAccessibilityHUD;
- (id)initWithLayoutStyle:(long long)a0;
- (void)reloadData;
- (id)headerView;
- (double)padHeaderViewContentInsetLeft;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonCAMTimerButtonInitialization;
- (void)_updateCurrentGlyphImage;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (id)_currentGlyphImageForAccessibiliyHUD:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHideOffWhenCollapsed:(BOOL)a0 needsReloadData:(BOOL)a1;
- (long long)numberOfMenuItems;
- (void)setDuration:(long long)a0 animated:(BOOL)a1;
- (id)shownIndexesWhileCollapsed;

@end
