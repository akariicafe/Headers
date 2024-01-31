@class NSArray, NSString, UITableView;

@interface WFAutomationNotificationListContentView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *triggerDisplayInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)updateUIFromNotificationUserInfo:(id)a0;

@end
