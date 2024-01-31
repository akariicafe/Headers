@class PKAccount, NSString, QLItem, NSData, QLPreviewController, PKPaymentWebService;

@interface PKAccountTermsAndConditionsController : NSObject <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {
    long long _context;
    PKPaymentWebService *_webService;
    PKAccount *_account;
    NSString *_termsIdentifier;
    id /* block */ _completionBlock;
    NSData *_termsData;
    NSString *_termsFileName;
    QLItem *_pdfItem;
    QLPreviewController *_previewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideDataForItem:(id)a0;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void)previewControllerWillDismiss:(id)a0;
- (void)_fetchTermsDataWithCompletion:(id /* block */)a0;
- (id)_loadViewController;
- (id)initWithAccount:(id)a0 webService:(id)a1 context:(long long)a2 termsIdentifier:(id)a3;
- (void)termsViewControllerWithCompletion:(id /* block */)a0;

@end
