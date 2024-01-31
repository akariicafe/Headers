@class NSString, RUITableView, UIView;

@interface AAUIRUITableViewSectionInjector : AAUITableViewDecorator <AAUITableViewInjectorProtocol> {
    RUITableView *_remoteTableViewController;
    UIView *_viewToInject;
}

@property (weak, nonatomic) NSString *injectionType;

+ (BOOL)shouldInject:(id)a0 inPage:(id)a1;

- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)_shouldInjectViewInSection:(long long)a0;
- (id)initWithTableView:(id)a0 ruiTableView:(id)a1 injectWith:(id)a2;

@end
