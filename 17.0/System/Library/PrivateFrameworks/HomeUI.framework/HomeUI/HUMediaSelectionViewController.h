@class HUMediaSelectionItemManager, NSString;
@protocol HUMediaSelectionViewControllerDelegate;

@interface HUMediaSelectionViewController : HUItemTableViewController <MPMediaPickerControllerDelegatePrivate, HUMediaSourceListDelegate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate>

@property (retain, nonatomic) HUMediaSelectionItemManager *mediaSelectionItemManager;
@property (nonatomic) unsigned long long lastTargetOptions;
@property (weak, nonatomic) id<HUMediaSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)mediaPicker:(id)a0 didPickPlaybackArchive:(id)a1;
- (void)mediaPickerDidCancel:(id)a0;
- (BOOL)_allowRowInteractionForIndexPath:(id)a0;
- (void)_presentMediaPickerUnavailablePromptWithReason:(long long)a0 storeKitErrorObject:(id)a1;
- (void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)a0 pickingForExternalPlayer:(BOOL)a1;
- (void)applyAccessory:(long long)a0 toItem:(id)a1 onTableView:(id)a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithActionSetBuilder:(id)a0;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)mediaPickerDidPickPlaybackArchive:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)sliderValueTableViewCell:(id)a0 didChangeValue:(double)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
