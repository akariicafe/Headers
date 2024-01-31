@interface SwiftUI.DocumentBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ documentConfigurations;
    void /* unknown type, empty encoding */ rootModifier;
    void /* unknown type, empty encoding */ configurationMap;
}

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)documentBrowser:(id)a0 didImportDocumentAtURL:(id)a1 toDestinationURL:(id)a2;
- (void)documentBrowser:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentBrowser:(id)a0 didRequestDocumentCreationWithHandler:(id /* block */)a1;
- (void)documentBrowser:(id)a0 failedToImportDocumentAtURL:(id)a1 error:(id)a2;
- (id)initForOpeningContentTypes:(id)a0;
- (id)initForOpeningFilesWithContentTypes:(id)a0;

@end
