@interface HUEmbeddedTriggerActionSetGridViewController : HomeUI.EmbeddedActionSetContainerSummaryGridViewController <HUTriggerSummaryActionGridViewControllerProtocol>

@property (nonatomic, retain) void /* unknown type, empty encoding */ triggerBuilder;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void).cxx_destruct;
- (void)reloadActions;
- (id)initWithTriggerBuilder:(id)a0;
- (void)sceneEditor:(id)a0 removeActionSetBuilderFromTrigger:(id)a1;

@end
