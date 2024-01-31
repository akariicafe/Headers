@interface DDClientPreviewAction : DDPreviewAction

+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)clientCanPerformActionWithUrl:(id)a0;

- (id)viewController;
- (id)menuActions;
- (id)iconName;
- (id)localizedName;
- (void)performFromView:(id)a0;

@end
