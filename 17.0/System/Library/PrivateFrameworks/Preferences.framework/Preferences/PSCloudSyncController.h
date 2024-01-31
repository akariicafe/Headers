@protocol PSCloudSyncPopoverDelegate;

@interface PSCloudSyncController : PSListController

@property (weak, nonatomic) id<PSCloudSyncPopoverDelegate> delegate;

- (void)setCloudSyncEnabled:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)specifiers;
- (id)cloudSyncEnabled;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
