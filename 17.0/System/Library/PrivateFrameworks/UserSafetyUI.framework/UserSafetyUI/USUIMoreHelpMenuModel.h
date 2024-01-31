@class NSString, NSArray;

@interface USUIMoreHelpMenuModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *actions;

+ (void)addDefaultActionsTo:(id)a0;
+ (void)addMenuActionsTo:(id)a0 interventionType:(long long)a1;
+ (void)addOptionalActionsTo:(id)a0 options:(long long)a1;
+ (id)menuTitleWith:(long long)a0;
+ (id)modelWithOptions:(long long)a0 interventionType:(long long)a1;

- (void).cxx_destruct;

@end
