@class NSString, NSArray, UIDocumentInteractionController, SFQuickLookDocument, SFQuickLookDocumentView;

@interface SFQuickLookDocumentController : NSObject <SFQuickLookDocumentViewDelegate> {
    NSArray *_buttonActions;
    UIDocumentInteractionController *_documentInteractionController;
    SFQuickLookDocument *_quickLookDocument;
}

@property (readonly, nonatomic) SFQuickLookDocumentView *documentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_actionTitleForType:(long long)a0 withActionCount:(unsigned long long)a1;
- (id)_supportedApplications;
- (void)_updateActionButtons;
- (long long)dataOwnerForQuickLookDocumentView:(id)a0;
- (id)itemProviderForQuickLookDocumentView:(id)a0;
- (void)presentDocumentInteractionControllerFromSource:(id)a0;
- (void)quickLookDocumentView:(id)a0 didSelectActionAtIndex:(long long)a1;
- (void)updateWithQuickLookDocument:(id)a0;

@end
