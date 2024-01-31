@class NSString, HFPinCodeManager;

@interface HUUsersAndGuestsPinCodeViewController : HUItemTableViewController <HUPresentationDelegate, HFPinCodeManagerObserver>

@property (weak, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)hideSpinner;
- (void)showSpinner;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithSourceItem:(id)a0 pinCodeManager:(id)a1 home:(id)a2 forAccessory:(id)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;

@end
