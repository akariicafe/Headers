@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol, _UIStickerPickerHostProtocol>

@property (nonatomic, getter=_isShownInline, setter=_setShownInline:) BOOL _shownInline;
@property (weak, nonatomic) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)requestInlineViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)serviceViewControllerInterface;

- (void)presentCard;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissCard;
- (void)stageStickerWithIdentifier:(id)a0 representations:(id)a1 name:(id)a2 externalURI:(id)a3 accessibilityLabel:(id)a4;
- (void)stickerPickerCardDidLoad;
- (void)stageSticker:(id)a0;
- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (BOOL)__shouldRemoteViewControllerFenceGeometryChange:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)setHostBundleID:(id)a0;

@end
