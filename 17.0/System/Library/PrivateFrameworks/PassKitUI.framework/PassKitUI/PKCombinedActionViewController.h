@class PKPassView, UIFont, PKCombinedSelectActionGroupViewControllerListSectionController, PKPaymentPassAction, PKPaymentPassActionGroup, UIColor, NSString, PKCombinedSelectActionViewControllerListSectionController, PKPaymentPass, PKCollapsibleHeaderView, NSArray, PKPaymentWebService, PKTransitBalanceModel;
@protocol PKPaymentDataProvider, PKCombinedActionViewControllerDelegate;

@interface PKCombinedActionViewController : PKDynamicCollectionViewController <PKCombinedSelectActionGroupViewControllerListSectionControllerDelegate, PKCombinedSelectActionViewControllerListSectionControllerDelegate, PKRemoteActionGroupViewControllerDelegate, PKPerformActionViewControllerDelegate> {
    double _headerHeight;
    PKCombinedSelectActionGroupViewControllerListSectionController *_actionGroupsListController;
    PKCombinedSelectActionViewControllerListSectionController *_actionsListController;
    PKPaymentPass *_pass;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    NSArray *_actionGroups;
    PKPaymentPassActionGroup *_selectedActionGroup;
    NSArray *_actions;
    PKPaymentPassAction *_selectedAction;
    BOOL _viewDidAppear;
    PKPassView *_passView;
    PKTransitBalanceModel *_transitBalanceModel;
}

@property (readonly, nonatomic) PKCollapsibleHeaderView *headerView;
@property (weak, nonatomic) id<PKCombinedActionViewControllerDelegate> delegate;
@property (copy, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIColor *headerBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)headerImage;
- (void)setHeaderImage:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)didSelectAction:(id)a0;
- (void)didSelectActionGroup:(id)a0;
- (id)initWithPass:(id)a0 actionGroups:(id)a1 paymentDataProvider:(id)a2 webService:(id)a3 balanceModel:(id)a4;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (void)remoteGroupActionsViewControllerDidCancel:(id)a0;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)a0;

@end
