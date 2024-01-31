@class AFUIAutoFillPopoverController, NSString, AFUIExplicitAutoFillController, AFUIClientSession;
@protocol AFUIModalUIDelegate;

@interface AFUIPanel : NSObject <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) AFUIAutoFillPopoverController *popoverController;
@property (retain, nonatomic) AFUIClientSession *clientSession;
@property (retain, nonatomic) AFUIExplicitAutoFillController *explicitAutoFillController;
@property (weak, nonatomic) id<AFUIModalUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)documentStateChanged:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)hide;
- (id)_presentingWindow;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)_hide;
- (void)transientUnhide;
- (void)transientHide;

@end
