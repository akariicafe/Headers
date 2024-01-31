@class WFSharedShortcut, WFCloudKitTask;

@interface WFStopSharingWorkflowActivity : UIActivity

@property (retain, nonatomic) WFSharedShortcut *shortcut;
@property (retain, nonatomic) WFCloudKitTask *unshareTask;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;

@end
