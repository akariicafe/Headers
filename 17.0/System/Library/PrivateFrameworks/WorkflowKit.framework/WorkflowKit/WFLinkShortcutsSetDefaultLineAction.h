@interface WFLinkShortcutsSetDefaultLineAction : WFOverridableLinkAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptSubtitleWithPreviousContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
