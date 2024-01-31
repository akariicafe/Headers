@class UIView, OBTrayButton;
@protocol AAUIOBTableWelcomeControllerViewModelProtocol, AAUIOBTableWelcomeControllerDelegate;

@interface AAUIOBTableWelcomeController : OBTableWelcomeController {
    id<AAUIOBTableWelcomeControllerViewModelProtocol> _viewModel;
    UIView *_helpLinkFooterView;
}

@property (retain, nonatomic) OBTrayButton *primaryButton;
@property (retain, nonatomic) OBTrayButton *secondaryButton;
@property (weak, nonatomic) id<AAUIOBTableWelcomeControllerDelegate> delegate;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_addPrimaryButtonWithViewModel:(id)a0;
- (void)_addSecondaryViewWithViewModel:(id)a0;
- (void)_addSecondaryButtonWithViewModel:(id)a0;
- (void)_delegate_tableViewControllerDidTapSecondaryButton;
- (void)_delegate_tableWelcomeViewControllerDidTapPrimaryButton;
- (id)_helpLinkFooterView;
- (void)_openHelpLink;
- (void)_setupTableViewWithViewModel:(id)a0;

@end
