@class MKETAProvider, NSString, NSArray, MUHeaderButtonsViewConfiguration, _MKPlaceActionButtonController, MUPlaceHeaderButton;
@protocol MUHeaderButtonsViewDelegate;

@interface MUHeaderButtonsView : UIView <MKETAProviderObserver> {
    MUPlaceHeaderButton *_primaryButton;
    MUPlaceHeaderButton *_alternatePrimaryButton;
    MUPlaceHeaderButton *_secondaryButton;
    MUPlaceHeaderButton *_moreButton;
    NSArray *_constraints;
    BOOL _isStackingButtons;
    MUHeaderButtonsViewConfiguration *_configuration;
    MKETAProvider *_etaProvider;
}

@property (weak, nonatomic) id<MUHeaderButtonsViewDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateConstraintsIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (void)ETAProviderUpdated:(id)a0;
- (void)_activateNewConstraints:(id)a0;
- (void)_createLayout;
- (void)_didTapAlternatePrimaryAction;
- (void)_didTapMoreButton;
- (void)_didTapPrimaryAction;
- (void)_didTapSecondaryAction;
- (void)_loadPrimaryButtonWithPrimaryType:(unsigned long long)a0;
- (void)_loadSecondaryButtonWithSecondaryActionController:(id)a0;
- (BOOL)shouldStackForButtons;

@end
