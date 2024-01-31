@class HUFaceRecognitionLibraryListItemManager, NSString;

@interface HUFaceRecognitionLibraryListViewController : HUItemTableViewController <UITextViewDelegate, HUTappableTextViewDelegate, HUSwitchCellDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate>

@property (retain, nonatomic) HUFaceRecognitionLibraryListItemManager *listItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithHome:(id)a0;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)dismissTextViewController;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)personEditorViewController:(id)a0 didUpdateItem:(id)a1;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)a0 animated:(BOOL)a1;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)a0 personManager:(id)a1 animated:(BOOL)a2;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (id)trailingSwipeActionsForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
