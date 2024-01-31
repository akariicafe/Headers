@class AKController, AKSignatureCreationViewController_iOS, NSString, AKSignaturesViewController_iOS, AKSignaturesPresentationContext;
@protocol AKSignaturesControllerDelegate;

@interface AKSignaturesController : NSObject <UIPopoverPresentationControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate>

@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesAlertViewController;
@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController;
@property (retain, nonatomic) AKSignatureCreationViewController_iOS *signaturesCreationViewController;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) id<AKSignaturesControllerDelegate> delegate;
@property (retain, nonatomic) AKSignaturesPresentationContext *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)presentSignaturesViewController;
- (void)_continueToCreateSignature;
- (void)_continueToManageSignatures;
- (void)_notifyDidSelectSignature;
- (void)signatureCreationControllerDidCreateSignature:(id)a0;
- (void)signatureCreationControllerDidDismiss:(id)a0;
- (void)signaturesViewControllerContinueToCreateSignature:(id)a0;
- (void)signaturesViewControllerDidCancel:(id)a0;
- (void)signaturesViewControllerDidSelectSignature:(id)a0;

@end
