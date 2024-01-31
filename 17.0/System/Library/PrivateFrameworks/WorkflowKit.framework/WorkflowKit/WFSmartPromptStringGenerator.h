@interface WFSmartPromptStringGenerator : NSObject

+ (id)contentDescriptionWithAttributionSet:(id)a0 contentItemCache:(id)a1;
+ (id)localizedPromptForWorkflowName:(id)a0 attributionSet:(id)a1 contentCollection:(id)a2 contentItemCache:(id)a3 contentDestination:(id)a4 action:(id)a5 isWebpageCoercion:(BOOL)a6;
+ (id)localizedSubtitleForWorkflowName:(id)a0 attributionSet:(id)a1 previousAttributions:(id)a2 contentItemCache:(id)a3 contentDestination:(id)a4 action:(id)a5 isWebpageCoercion:(BOOL)a6;

@end
