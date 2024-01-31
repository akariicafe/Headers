@class PNPDeviceState, PNPPencilView, NSString, PNPChargingStatusView, PNPWizardViewController;
@protocol PNPPairingViewDelegate;

@interface PNPPairingView : UIView <PNPWizardViewDelegatePrivate, PNPDeviceStateConfigurable, PNPChargingStatusViewHosting> {
    PNPDeviceState *_deviceState;
    PNPPencilView *_pencilView;
    BOOL _finishedWizardTransition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pencilSpinningRect;
}

@property (retain, nonatomic) PNPWizardViewController *wizardViewController;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PNPPairingViewDelegate> delegate;
@property (nonatomic) BOOL showWizardContents;
@property (readonly, nonatomic) PNPPencilView *pencilView;
@property (nonatomic) BOOL shouldShowWhatsNew;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView;
@property (nonatomic) BOOL showsChargingStatusView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeForState:(unsigned long long)a0 deviceState:(id)a1;
- (struct CGSize { double x0; double x1; })_pencilSizeForState:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_pencilTransformForState:(unsigned long long)a0 deviceState:(id)a1;
- (id)backgroundColorForWizardController:(id)a0;
- (void)prepareForTransitionToWizard;
- (BOOL)shouldShowWhatsNewController;
- (void)transitionToWizard;
- (void)unhideWizardIfNecessary;
- (void)wizardTransitionFinished;
- (void)wizardViewRequestsDismiss:(id)a0;

@end
