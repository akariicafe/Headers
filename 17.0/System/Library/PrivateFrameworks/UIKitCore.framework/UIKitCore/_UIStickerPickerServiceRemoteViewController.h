@protocol _UIStickerPickerRemoteViewControllerDelegate;

@interface _UIStickerPickerServiceRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<_UIStickerPickerRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)serviceViewControllerInterface;

- (void)presentCard;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismissCard;
- (void)stageStickerWithIdentifier:(id)a0 representations:(id)a1 name:(id)a2 externalURI:(id)a3 accessibilityLabel:(id)a4;
- (void)stickerPickerCardDidLoad;
- (void)stageSticker:(id)a0;

@end
