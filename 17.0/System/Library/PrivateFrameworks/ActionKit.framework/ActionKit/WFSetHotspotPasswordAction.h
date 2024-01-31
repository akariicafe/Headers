@class NSString, NSError, WFContentCollection;

@interface WFSetHotspotPasswordAction : WFAction

@property (nonatomic, readonly) NSString *descriptionNote;

- (id)init;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)contentDestinationWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
