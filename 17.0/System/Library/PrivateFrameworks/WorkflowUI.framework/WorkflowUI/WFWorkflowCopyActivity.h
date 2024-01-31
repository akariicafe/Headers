@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity

@property (readonly, nonatomic) NSURL *excludedURL;
@property (retain, nonatomic) NSURL *URL;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithExcludedURL:(id)a0;

@end
