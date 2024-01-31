@class UIBarButtonItem, NSString, PXPhotosViewModel, PXUpdater, _PXPhotosBarButtonSpecManager, PXCuratedLibraryOverlayButton, PXPhotosHeaderCustomizationModel;

@interface _PXPhotosBarButtonView : UIView <PXChangeObserver>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long systemItem;
@property (readonly, nonatomic) NSString *systemIconImageName;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) SEL menuAction;
@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryOverlayButton *button;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) id changeDeliveryHandle;
@property (readonly, nonatomic) PXPhotosHeaderCustomizationModel *headerCustomizationModel;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)_pauseChangeDelivery;
- (void)_updateAlpha;
- (void)tintColorDidChange;
- (void)_handleAction;
- (void)_handleMenuAction;
- (void)_updateButtons;
- (void)_resumeChangeDeliveryIfPossible;
- (void)_invalidateButtons;
- (void).cxx_destruct;
- (void)_handleWillDisplayMenu;
- (id)initWithTitle:(id)a0 orSystemItem:(long long)a1 orSystemIconName:(id)a2 target:(id)a3 action:(SEL)a4 menuAction:(SEL)a5 specManager:(id)a6 viewModel:(id)a7;
- (id)_createButtonConfiguration;
- (void)_invalidateAlpha;
- (void)layoutSubviews;
- (void)_handleWillDismissMenu;

@end
