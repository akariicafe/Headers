@interface WFEvernoteAppendAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)performSearch:(id)a0 inNotebook:(id)a1 maxResults:(unsigned long long)a2;
- (id)titleSearch;
- (void)uploadNoteWithContent:(id)a0 toNotebook:(id)a1;

@end
