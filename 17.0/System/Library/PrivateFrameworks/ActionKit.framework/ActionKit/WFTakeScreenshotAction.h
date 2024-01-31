@class FBSDisplayLayoutMonitor;

@interface WFTakeScreenshotAction : WFAction

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)takeScreenshot;
- (void).cxx_destruct;
- (void)cancel;
- (id)contentDestinationWithError:(id *)a0;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)notifyVisibleScenesOfScreenshot:(id /* block */)a0;
- (id)screenshotDisplay:(id)a0 error:(id *)a1;

@end
