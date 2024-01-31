@class NSString, HUSiriTriggerPhraseSettingDetailsItemManager;
@protocol HUSiriTriggerPhraseSettingDelegate;

@interface HUSiriTriggerPhraseSettingDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HUSiriTriggerPhraseSettingDetailsItemManager *siriSettingsDetailsItemManager;
@property (weak, nonatomic) id<HUSiriTriggerPhraseSettingDelegate> delegate;
@property (nonatomic) long long selectedSiriTriggerPhraseIndex;
@property (nonatomic) long long inProgressTriggerPhraseUpdateIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateFooterText;
- (void)_clearSpinner;
- (void)_preflightCheckToAllowSwitchingSiriTriggerForMediaItem:(id)a0 changingToOn:(BOOL)a1 withCompletion:(id /* block */)a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0;
- (id)initWithAccessorySettingItem:(id)a0 module:(id)a1;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
