@class NSString, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferQRCodeViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    NSString *_transferCredentials;
    NSString *_carrierName;
    UIBarButtonItem *_cancelButton;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
