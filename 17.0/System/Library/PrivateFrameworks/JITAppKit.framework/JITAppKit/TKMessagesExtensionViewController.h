@interface TKMessagesExtensionViewController : MSMessagesAppViewController

- (void)willBecomeActiveWithConversation:(id)a0;
- (void)didReceiveMessage:(id)a0 conversation:(id)a1;
- (void)didCancelSendingMessage:(id)a0 conversation:(id)a1;
- (void)didResignActiveWithConversation:(id)a0;
- (void)didStartSendingMessage:(id)a0 conversation:(id)a1;
- (void)didTransitionToPresentationStyle:(unsigned long long)a0;
- (void)willTransitionToPresentationStyle:(unsigned long long)a0;

@end
