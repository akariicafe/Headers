@interface WFTrelloGetItemsAction : WFAction

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)updateBoards:(id)a0 onAccount:(id)a1;
- (void)updateListCache:(id)a0 board:(id)a1 account:(id)a2;

@end
