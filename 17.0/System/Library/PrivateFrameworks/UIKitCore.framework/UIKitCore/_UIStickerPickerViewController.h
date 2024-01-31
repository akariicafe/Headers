@class _UIStickerPickerServiceRemoteViewController, NSString, UIView;
@protocol _UIStickerPickerViewControllerDelegate;

@interface _UIStickerPickerViewController : UIViewController <_UIStickerPickerRemoteViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (nonatomic) BOOL isLaunchedFromKeyboard;
@property (retain, nonatomic) _UIStickerPickerServiceRemoteViewController *card;
@property (readonly, nonatomic) BOOL supportsReturningStickerIdentifiersDuringAddition;
@property (nonatomic) BOOL keyWindowChangedDuringInsert;
@property (weak, nonatomic) id<_UIStickerPickerViewControllerDelegate> delegate;
@property (retain) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)a0;

- (id)init;
- (void)presentCard;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)a0;
- (void)loadView;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismissCard;
- (void)stageStickerWithIdentifier:(id)a0 representations:(id)a1 name:(id)a2 externalURI:(id)a3 accessibilityLabel:(id)a4;
- (void)stickerPickerCardDidLoad;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)stageSticker:(id)a0;
- (void)_insertStickerFromItemProvider:(id)a0;
- (void)_addStickerWithRepresentations:(id)a0 previewView:(id)a1 animatingTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_remoteViewDidLoad:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectInWindowCoordinates;
- (void)_updatePopoverWindowLocation;
- (id)_viewServiceProxy;
- (void)addStickerWithRepresentations:(id)a0 previewView:(id)a1 originatingView:(id)a2;
- (void)addStickerWithRepresentations:(id)a0 previewView:(id)a1 originatingView:(id)a2 completion:(id /* block */)a3;
- (void)animatedStickerCreationProgressChanged:(id)a0 progress:(double)a1;
- (void)dismissCardAnimated:(BOOL)a0;
- (BOOL)supportsReturningStickerIdentifiersDuringAdditionV2;

@end
