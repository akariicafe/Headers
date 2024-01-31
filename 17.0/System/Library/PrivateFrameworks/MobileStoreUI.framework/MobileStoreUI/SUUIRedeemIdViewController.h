@class UIBarButtonItem, SUUIClientContext, SUUIRedeemIdManager, NSMutableDictionary, NSString, UITableView;
@protocol SUUIRedeemIdDelegate;

@interface SUUIRedeemIdViewController : UIViewController <SUUIRedeemIdManagerDelegate>

@property (retain, nonatomic) SUUIRedeemIdManager *manager;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) NSMutableDictionary *fields;
@property (weak, nonatomic) id<SUUIRedeemIdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardDidHide:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_cancelPressed;
- (void)_adjustInsetsForKeyboardFrameValue:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsFromInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 usingNewTopInset:(double)a1;
- (id)_fieldForIndexPath:(id)a0;
- (id)_finalOutputFields;
- (void)_initializeManager;
- (void)_initializeNavigationItem;
- (void)_initializeTableView;
- (void)_nextPressed;
- (void)_refreshNavigationItem;
- (void)_reloadFooter;
- (void)_subscribeToKeyboardEvents;
- (void)_updateFieldAtIndexPath:(id)a0 withText:(id)a1;
- (BOOL)_validateForm;
- (id)initWithClientContext:(id)a0;
- (void)redeemIdManager:(id)a0 didChangeToText:(id)a1 forCellAtIndexPath:(id)a2;
- (void)redeemIdManager:(id)a0 didReturnText:(id)a1 forCellAtIndexPath:(id)a2;
- (void)redeemIdManager:(id)a0 movedToRowAtIndexPath:(id)a1;

@end
