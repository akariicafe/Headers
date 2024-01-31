@class NSString, ICNote, ICNAEventReporter, UIView, NSArray;

@interface LinkEditorViewController : UIViewController <ICLinkAcceleratorControllerDelegate> {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ linkEditorView;
    void /* unknown type, empty encoding */ singleWidthSpace;
    void /* unknown type, empty encoding */ textSelection;
    void /* unknown type, empty encoding */ _viewModel;
    void /* unknown type, empty encoding */ linkTextChanged;
    void /* unknown type, empty encoding */ selectedNoteChange;
    void /* unknown type, empty encoding */ selectedURLChange;
    void /* unknown type, empty encoding */ selectedURLTextChange;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBarButtonItem;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastSelectedRangeForAccelerator;
@property (nonatomic, readonly) BOOL languageHasSpaces;
@property (nonatomic, readonly) long long writingDirection;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) UIView *acceleratorHostingView;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) UIView *urlTextFieldView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ addApproach;
@property (nonatomic, retain) void /* unknown type, empty encoding */ linkAcceleratorController;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void)acceleratorOriginNeedsUpdate;
- (void)didSelectNoteSuggestionWithIdentifier:(id)a0 title:(id)a1;
- (void)handleReturnKey:(id)a0;
- (void)setupObservers;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doneAction;
- (void)removeLink;
- (void)cancelAction:(id)a0;
- (void)hideAccelerator;
- (void)insertAndDismissWithCompletion:(id /* block */)a0;
- (void)handleArrowDown:(id)a0;
- (void)handleArrowUp:(id)a0;
- (void)handleEscape:(id)a0;
- (void)horizontalSizeClassDidChange;
- (void)presentAcceleratorIfNecessary;
- (void)selectedSuggestionWithSelection:(id)a0;
- (void)selectedURLWithSelection:(id)a0;
- (void)validateSelection;

@end
