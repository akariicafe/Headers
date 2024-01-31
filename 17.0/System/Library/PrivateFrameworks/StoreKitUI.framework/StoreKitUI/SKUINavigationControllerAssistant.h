@class UINavigationController, SKUIClientContext, _UINavigationControllerPalette, UIView, UIViewController;
@protocol SKUIStatusOverlayProvider;

@interface SKUINavigationControllerAssistant : NSObject

@property (retain, nonatomic) UIView *childPaletteView;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) _UINavigationControllerPalette *paletteBackgroundView;
@property (retain, nonatomic) UIViewController *statusOverlayViewController;
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) BOOL hidesShadow;
@property (retain, nonatomic) id<SKUIStatusOverlayProvider> statusOverlayProvider;

+ (id)assistantForNavigationController:(id)a0 clientContext:(id)a1;
+ (id)existingAssistantForNavigationController:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_hideChildPaletteView:(id)a0 animated:(BOOL)a1;
- (void)_hideOverlayView:(id)a0 animated:(BOOL)a1;
- (id)_initWithNavigationController:(id)a0 clientContext:(id)a1;
- (void)_previewDocumentChangeNotification:(id)a0;
- (void)_setStatusOverlayProvider:(id)a0 animated:(BOOL)a1;
- (void)_showOverlayView:(id)a0 previousOverlayView:(id)a1 animated:(BOOL)a2;
- (void)_transitionToPaletteView:(id)a0 animated:(BOOL)a1 operation:(long long)a2;
- (void)setPalettePinningBarHidden:(BOOL)a0;
- (void)setPaletteView:(id)a0 animated:(BOOL)a1;
- (void)setStatusOverlayProvider:(id)a0 animated:(BOOL)a1;

@end
