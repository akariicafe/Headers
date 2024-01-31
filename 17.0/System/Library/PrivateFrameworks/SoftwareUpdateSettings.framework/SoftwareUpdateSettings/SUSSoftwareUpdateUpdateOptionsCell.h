@class UIMenu, NSString, UIContextMenuInteraction, UIActivityIndicatorView, NSLayoutConstraint, UIButton;

@interface SUSSoftwareUpdateUpdateOptionsCell : PSTableCell <UIContextMenuInteractionDelegate> {
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    UIMenu *_secondaryButtonMenu;
    UIContextMenuInteraction *_secondaryButtonContextMenuInteraction;
    id /* block */ _primaryButtonAction;
    id /* block */ _primaryButtonLongTapAction;
    id /* block */ _secondaryButtonAction;
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_stackViewTopAnchor;
    NSLayoutConstraint *_stackViewBottomAnchor;
}

@property (retain, nonatomic) NSString *primaryButtonText;
@property (retain, nonatomic) NSString *secondaryButtonText;
@property (nonatomic, getter=isPrimaryButtonEnabled) BOOL primaryButtonEnabled;
@property (nonatomic, getter=isSecondaryButtonEnabled) BOOL secondaryButtonEnabled;
@property (nonatomic, getter=isPrimaryButtonHidden) BOOL primaryButtonHidden;
@property (nonatomic, getter=isSecondaryButtonHidden) BOOL secondaryButtonHidden;
@property (nonatomic) long long activityIndicatorDisplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setEnabled:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)_setupView;
- (void)setPrimaryButtonActionHandler:(id /* block */)a0;
- (void)setPrimaryButtonLongTapActionHandler:(id /* block */)a0;
- (void)setSecondaryButtonActionHandler:(id /* block */)a0;
- (void)setSecondaryButtonMenu:(id)a0;
- (void)_addActivityIndicatorFor:(id)a0;
- (id)_configurePrimaryButton;
- (id)_configureSecondaryButton;
- (void)_configureStackViewMargin;
- (void)_primaryButtonLongTapped:(id)a0;

@end
