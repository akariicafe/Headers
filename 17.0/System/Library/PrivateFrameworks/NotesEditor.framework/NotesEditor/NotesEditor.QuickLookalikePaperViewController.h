@class NSUndoManager;

@interface NotesEditor.QuickLookalikePaperViewController : UINavigationController <PKToolPickerObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ paperDocumentViewController;
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ syncCancellable;
    void /* unknown type, empty encoding */ markupButton;
    void /* unknown type, empty encoding */ findButton;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ formFillingButton;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ undoButton;
    void /* unknown type, empty encoding */ redoButton;
    void /* unknown type, empty encoding */ _undoManager;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dismissAction;
}

@property (nonatomic, readonly) NSUndoManager *undoManager;

- (id)initWithRootViewController:(id)a0;
- (void)done:(id)a0;
- (void)redo:(id)a0;
- (void)search:(id)a0;
- (void)share:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)undo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateBarButtonItems;
- (void)toolPickerVisibilityDidChange:(id)a0;
- (void)markup:(id)a0;
- (void)fillForm:(id)a0;

@end
