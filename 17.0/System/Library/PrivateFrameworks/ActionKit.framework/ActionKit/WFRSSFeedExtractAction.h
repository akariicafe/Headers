@interface WFRSSFeedExtractAction : WFAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)addRSSFeedItemsFromHTML:(id)a0 baseURL:(id)a1 encoding:(id)a2;
- (void)getURLsFromInputWithCompletionHandler:(id /* block */)a0;

@end
