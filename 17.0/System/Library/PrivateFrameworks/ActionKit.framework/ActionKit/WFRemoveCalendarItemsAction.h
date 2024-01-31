@interface WFRemoveCalendarItemsAction : WFAction

- (unsigned long long)entityType;
- (void)deleteItems:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (Class)contentItemClass;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)accessResource;

@end
