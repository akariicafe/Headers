@class HUPlaybackInfluencesItemManager, NSString;

@interface HUPlaybackInfluencesViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HUPlaybackInfluencesItemManager *playbackInfluencesItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)dismissPrivacyController;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
