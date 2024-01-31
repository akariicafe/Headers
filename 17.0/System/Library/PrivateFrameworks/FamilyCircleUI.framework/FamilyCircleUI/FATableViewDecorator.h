@class NSString;
@protocol UITableViewDataSource, FATableViewProtocol, UITableViewDelegate;

@interface FATableViewDecorator : NSObject <FATableViewProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) id<FATableViewProtocol> tableView;
@property (weak, nonatomic) id<UITableViewDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)reloadData;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)reloadRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;

@end
