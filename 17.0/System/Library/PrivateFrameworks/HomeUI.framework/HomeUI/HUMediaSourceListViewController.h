@class MPPlaybackArchive;
@protocol HUMediaSourceListDelegate;

@interface HUMediaSourceListViewController : HUItemTableViewController <HUMediaPickerDelegate>

@property (retain) MPPlaybackArchive *currentPlaybackSelection;
@property (weak, nonatomic) id<HUMediaSourceListDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void).cxx_destruct;
- (void)dismissViewController;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)errorAlertControllerForResolveError:(id)a0;
- (id)initForMediaProfileContainers:(id)a0 forTarget:(unsigned long long)a1;
- (void)mediaPickerDidCancel;
- (void)mediaPickerDidPickPlaybackArchive:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
