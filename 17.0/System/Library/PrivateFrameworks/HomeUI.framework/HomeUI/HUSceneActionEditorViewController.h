@class HUQuickControlSummaryNavigationBarTitleView, NSString, NSMutableDictionary, NSSet, HUSceneActionEditorItemManager;
@protocol HUSceneEditorDelegate, HUPresentationDelegate;

@interface HUSceneActionEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HUSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUSymbolIconPickerDelegate, HUActionSetAccessoryPickerViewControllerDelegate, HUEmbeddedSceneActionGridViewControllerDelegate, HUIconPickerViewControllerDelegate, HUServiceGridViewControllerDelegate, HUMediaSelectionViewControllerDelegate, HUDetailsPresentationDelegateHost>

@property (readonly, nonatomic) HUSceneActionEditorItemManager *itemManager;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (copy, nonatomic) NSString *editingName;
@property (readonly, nonatomic) NSString *savedName;
@property (readonly, nonatomic) NSMutableDictionary *actionGridViewControllersByEditorType;
@property (nonatomic) BOOL hasViewEverAppeared;
@property (nonatomic) BOOL showCancelButton;
@property (weak, nonatomic) id<HUSceneEditorDelegate> sceneEditorDelegate;
@property (copy, nonatomic) NSSet *prioritizedAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

+ (BOOL)adoptsDefaultGridLayoutMargins;

- (id)commitChanges;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)_actionGridViewControllerForEditorType:(unsigned long long)a0;
- (BOOL)_allowEditingNameAndIcon;
- (void)_changeServices:(id)a0;
- (void)_deleteScene:(id)a0 indexPath:(id)a1;
- (void)_presentMediaSelection;
- (void)_sendSceneIconEditEventDidChangeColor:(BOOL)a0 didChangeIcon:(BOOL)a1;
- (void)_servicePickerDidFinish;
- (void)_testScene:(id)a0;
- (void)_updateActionSetBuilderName;
- (void)_validateDoneButton;
- (void)actionSetAccessoryPickerDidFinish:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)childViewControllersToPreload;
- (id)contentConfigurationForHeaderViewAtSectionIndex:(unsigned long long)a0;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (void)iconPicker:(id)a0 didPickIcon:(id)a1 withTintColor:(id)a2;
- (void)iconPicker:(id)a0 didPickIconDescriptor:(id)a1;
- (void)iconPickerDidCancel:(id)a0;
- (id)initWithActionSetBuilder:(id)a0 mode:(unsigned long long)a1;
- (void)itemManagerDidUpdate:(id)a0;
- (id)mediaSelectionViewController:(id)a0 messageForMediaPickerUnavailableReason:(long long)a1;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)a0;
- (void)nameAndIconEditorCellDidTapIcon:(id)a0;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (void)sceneActionGridViewController:(id)a0 didUpdate:(id)a1;
- (void)sceneServicePickerDidFinish:(id)a0;
- (void)serviceGridViewController:(id)a0 didTapItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
