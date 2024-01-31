@class UIDocumentPasswordView, NSObject;
@protocol PDFPasswordViewControllerDelegate;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {
    NSObject<PDFPasswordViewControllerDelegate> *_delegate;
    UIDocumentPasswordView *_uiDocPasswordView;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (void)clearPasswordField;
- (void)focusOnPasswordField;
- (void)presentInvalidPasswordAlertWithParentViewController:(id)a0;

@end
