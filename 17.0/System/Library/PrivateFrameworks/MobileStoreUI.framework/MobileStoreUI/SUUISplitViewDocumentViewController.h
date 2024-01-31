@class UISplitViewController, NSString, SUUISplitViewTemplateElement, SUUINavigationDocumentController, UIViewController;

@interface SUUISplitViewDocumentViewController : SUUIViewController <SUUINavigationDocumentDelegate, SUUIDocumentViewController> {
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SUUISplitViewTemplateElement *_templateElement;
}

@property (retain, nonatomic) SUUINavigationDocumentController *leftNavigationDocumentController;
@property (retain, nonatomic) SUUINavigationDocumentController *rightNavigationDocumentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (id)_defaultBackgroundColor;
- (BOOL)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (void)delayPresentationIfNeededForParentViewController:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;
- (id)leftBarButtonItemsForDocument:(id)a0;
- (void)navigationDocumentStackDidChange:(id)a0;
- (void)_SUUI_endDelayingPresentation;
- (void)suui_viewWillAppear:(BOOL)a0;

@end
