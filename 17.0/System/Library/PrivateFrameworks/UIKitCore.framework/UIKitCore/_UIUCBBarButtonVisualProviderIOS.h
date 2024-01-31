@class UIButton, _UISlotView;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    BOOL _slotViewHasRemoteContent;
    id /* block */ _menuProvider;
}

+ (id)_defaultTitleAttributes;

- (id)pointerShapeInContainer:(id)a0;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuTargetedPreview;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (void)updateMenu;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (BOOL)canUpdateMenuInPlace;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (long long)_securePasteButtonSite;
- (id)_newButtonForType:(long long)a0;
- (void)_configureImageOrTitleFromBarItem:(id)a0;
- (id)_constraintsForButton:(id)a0 withButtonItem:(id)a1;
- (id)contentView;
- (id)_defaultTitleAttributes;
- (void)updateSecureButton;
- (void).cxx_destruct;
- (BOOL)shouldUseImageInsets;
- (void)enableSecureButton:(BOOL)a0;
- (id)imageSymbolConfiguration;

@end
