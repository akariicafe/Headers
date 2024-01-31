@class WBTabGroup, _SWCollaborationButtonView, UIAction, SFThemeColorEffectView, SFTabGroupTitleView, UIToolbar;

@interface SFTabGroupBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    SFTabGroupTitleView *_titleView;
    UIToolbar *_toolbar;
}

@property (retain, nonatomic) WBTabGroup *tabGroup;
@property (retain, nonatomic) UIAction *tabGroupTapAction;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateToolbarItems;
- (BOOL)shouldUsePlainTheme;
- (void)themeDidChange;
- (void)updateTitle;

@end
