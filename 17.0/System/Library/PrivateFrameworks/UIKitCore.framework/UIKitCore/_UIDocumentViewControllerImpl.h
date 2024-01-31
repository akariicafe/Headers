@class UIBarButtonItemGroup, _UIBarButtonItemActionBinding, UIDocument, NSObject, UIViewController;
@protocol _UIDocumentViewControllerImplHost, OS_dispatch_queue;

@interface _UIDocumentViewControllerImpl : NSObject {
    struct { unsigned char isPresentedFromDocumentBrowser : 1; unsigned char hasReceivedDocumentDidOpen : 1; } _flags;
}

@property (readonly, weak, nonatomic) UIViewController<_UIDocumentViewControllerImplHost> *viewController;
@property (retain, nonatomic) _UIBarButtonItemActionBinding *undoManagerBinding;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *documentBackgroundQueue;
@property (nonatomic) unsigned long long lastKnownState;
@property (retain, nonatomic) UIDocument *document;
@property (readonly, nonatomic) UIBarButtonItemGroup *undoRedoItemGroup;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithViewController:(id)a0;
- (void)redo:(id)a0;
- (id)keyCommands;
- (void)didMoveToParentViewController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (void)undo:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_configureInitialNavigationItem;
- (void)__openDocumentFromURL:(id)a0;
- (void)__updateNavigationItemBackAction;
- (void)_closeDocumentIfNecessary;
- (void)_documentDidOpen;
- (void)_documentStateChanged:(id)a0;
- (BOOL)_isConsideredVisible;
- (void)_localizedNameChanged:(id)a0;
- (void)_presentDocumentPicker;
- (void)_registerDocumentObservers;
- (BOOL)_supportsDocumentPicker;
- (void)_unregisterDocumentObservers;
- (BOOL)_updateIsPresentedFromDocumentBrowser;
- (void)_updateNavigationItemIfNecessary;
- (BOOL)openDocumentIfNecessaryWithCompletionHandler:(id /* block */)a0;

@end
