@class PKPass, NSString, NSArray, NSDictionary, UITableView, PKSelectActionHeader, PKPaymentPassAction;
@protocol PKSelectActionViewDelegate;

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource> {
    PKPass *_pass;
    NSArray *_actions;
    NSDictionary *_balances;
    unsigned long long _actionType;
    PKSelectActionHeader *_actionHeader;
    UITableView *_tableView;
}

@property (retain, nonatomic) PKPaymentPassAction *selectedAction;
@property (weak, nonatomic) id<PKSelectActionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_addSubviews;
- (id)_balanceForTopUpAction:(id)a0;
- (id)initWithPass:(id)a0 actions:(id)a1 actionType:(unsigned long long)a2 balanceDictionary:(id)a3;

@end
