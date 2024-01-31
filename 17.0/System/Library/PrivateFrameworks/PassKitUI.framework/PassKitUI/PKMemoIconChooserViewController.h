@class NSString, PKMemoIconChooserSectionController, UIBarButtonItem;
@protocol PKMemoIconChooserViewControllerDelegate;

@interface PKMemoIconChooserViewController : PKDynamicCollectionViewController <PKMemoIconChooserSectionControllerDelegate, PKMemoIconChooserViewControllerDelegate> {
    id<PKMemoIconChooserViewControllerDelegate> _delegate;
    PKMemoIconChooserSectionController *_section;
    UIBarButtonItem *_doneButton;
    unsigned long long _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidateLayout;
- (void)_doneTapped;
- (void)didSelectItem:(id)a0;
- (void)_cancelTapped;
- (void)cell:(id)a0 didUpdateText:(id)a1;
- (id)initWithDelegate:(id)a0 memo:(id)a1;
- (id)initWithDelegate:(id)a0 memo:(id)a1 mode:(unsigned long long)a2;
- (void)memoIconChooserDidChooseMemo:(id)a0;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (void)selectCellForItem:(id)a0;

@end
