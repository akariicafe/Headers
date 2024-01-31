@interface WFInstapaperAddAction : WFInstapaperAction

- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)engine:(id)a0 connection:(id)a1 didAddBookmark:(id)a2;
- (id)connectionTypes;
- (void)runAsynchronouslyWithInput:(id)a0 selectedFolder:(id)a1;

@end
