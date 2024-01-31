@class HMHome, ACAccount, NSString;
@protocol HUMediaAccountDelegate;

@interface HUMultiUserTokenFixTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) ACAccount *mediaAccount;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HUMediaAccountDelegate> mediaAccountDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (id)_descriptionFont;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)_titleHeight;
- (id)_buttonTitleTextFont;
- (double)_buttonTitleTextHeight;
- (double)_descriptionHeight;
- (double)_maxTitleAndDescriptionCellHeightForWidth:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaAccount:(id)a1 home:(id)a2 delegate:(id)a3;
- (double)tableViewHeightForWidth:(double)a0;

@end
