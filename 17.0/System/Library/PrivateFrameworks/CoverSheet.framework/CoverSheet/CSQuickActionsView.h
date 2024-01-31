@class CSDashBoardQuickActionsButtonSettings, NSString, NSArray, CSQuickActionsButton, _UILegibilitySettings;
@protocol CSQuickActionsDelegate;

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver, SBFCustomImplicitPropertyAnimating>

@property (retain, nonatomic) CSDashBoardQuickActionsButtonSettings *quickActionsSettings;
@property (weak, nonatomic) id<CSQuickActionsDelegate> delegate;
@property (retain, nonatomic) CSQuickActionsButton *flashlightButton;
@property (retain, nonatomic) CSQuickActionsButton *cameraButton;
@property (nonatomic) BOOL flashlightOn;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *animatedLayerProperties;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (double)_insetX;
- (void)_updateButtonBackgroundVisible;
- (BOOL)interpretsLocationAsContent:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (double)_insetY;
- (void)_layoutQuickActionButtons;
- (void)_removeTargetsFromButton:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonOutsets;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (void)handleButtonTouchEnded:(id)a0;
- (void)refreshFlashlightAvailability;
- (void)_setButtonBackgroundVisible:(BOOL)a0;
- (void)_addTargetsToButton:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)_prototypingAllowsButtons;
- (void)layoutSubviews;
- (void)refreshSupportedButtons;
- (id)_buttonGroupName;
- (void)handleButtonTouchBegan:(id)a0;
- (void)handleButtonPress:(id)a0;
- (void)_addOrRemoveFlashlightButtonIfNecessary;

@end
