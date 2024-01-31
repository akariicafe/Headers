@class NSString, CKChatInputController, UIView;

@interface CKDefaultSceneOverlayPresentationContext : NSObject <CKSceneOverlayPresentationContext>

@property (weak, nonatomic) CKChatInputController *inputController;
@property (readonly, nonatomic) UIView *anchorView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchorRect;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) UIView *viewToPortal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willDismissSendMenuPresentation;
- (id)_determineViewToPortal;
- (void)_endSendMenuPresentation;
- (void)didChangePopoverMetrics:(id)a0;
- (void)didDismissSendMenuPresentation;
- (id)initWithChatInputController:(id)a0 initialTraitCollection:(id)a1;
- (void)willPresentAppCard;

@end
