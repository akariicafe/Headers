@class NSSet, NSString, NSArray, UITableView;

@interface NCSupplementaryViewPrototypeRecipeMenuViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource, NCNotificationListBaseComponent> {
    UITableView *_tableView;
    NSArray *_viewControllers;
}

@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;


@end
