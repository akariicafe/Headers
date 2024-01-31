@class NSString, UIBarButtonItemGroup, UIDocument, _UIDocumentViewControllerImpl;

@interface UIDocumentViewController : UIViewController <_UIDocumentViewControllerImplHost> {
    _UIDocumentViewControllerImpl *_impl;
}

@property (retain, nonatomic) UIDocument *document;
@property (readonly, nonatomic) UIBarButtonItemGroup *undoRedoItemGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)undoManager;
- (void)viewWillAppear:(BOOL)a0;
- (void)redo:(id)a0;
- (id)keyCommands;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithDocument:(id)a0;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (void)undo:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)documentDidOpen;
- (void)documentDidChange;
- (void)navigationItemDidUpdate;
- (void)openDocumentWithCompletionHandler:(id /* block */)a0;

@end
