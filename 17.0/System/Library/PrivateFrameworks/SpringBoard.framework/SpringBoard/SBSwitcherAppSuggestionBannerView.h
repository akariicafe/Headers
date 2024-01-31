@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    BOOL _highlighted;
    UIView *_highlightDarkeningView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
@property (readonly, nonatomic) unsigned long long style;

- (id)_titleFont;
- (id)_descriptionFont;
- (BOOL)_isSingleLine;
- (id)initWithRecipe:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_iconImageFromAppWithBundleIdentifier:(id)a0 withIconImageCache:(id)a1;
- (void)_updateAppearanceForCurrentUserInterfaceStyle;
- (id)_firstWakeGreetingString;
- (id)_borderView;
- (void)_createDarkeningView;
- (void)_configureConstraints;
- (void)_createIconViewForSuggestion:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appSuggestion:(id)a1 style:(unsigned long long)a2;
- (void)_createDescriptionLabelForSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)_appTitleForSuggestion:(id)a0;
- (id)_textStyle;
- (id)_descriptionStringForSuggestion:(id)a0;
- (id)_meCardShortName;
- (void)_createAppLabelForSuggestion:(id)a0;

@end
