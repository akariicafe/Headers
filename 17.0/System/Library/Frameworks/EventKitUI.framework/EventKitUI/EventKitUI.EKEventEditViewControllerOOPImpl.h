@interface EventKitUI.EKEventEditViewControllerOOPImpl : UIViewController {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ hostViewModel;
    void /* unknown type, empty encoding */ preCommitInsertedObjectIDs;
    void /* unknown type, empty encoding */ preCommitUpdatedObjectIDs;
    void /* unknown type, empty encoding */ preCommitDeletedObjectIDs;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ eventStore;
@property (nonatomic, retain) void /* unknown type, empty encoding */ event;
@property (nonatomic, retain) void /* unknown type, empty encoding */ editViewDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ editorBackgroundColor;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancelEditing;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;

@end
