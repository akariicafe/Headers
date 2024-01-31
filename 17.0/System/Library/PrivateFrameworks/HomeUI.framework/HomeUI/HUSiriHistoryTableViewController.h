@class HUSiriHistoryItemManager, NSString;

@interface HUSiriHistoryTableViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HUSiriHistoryItemManager *siriHistoryItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
