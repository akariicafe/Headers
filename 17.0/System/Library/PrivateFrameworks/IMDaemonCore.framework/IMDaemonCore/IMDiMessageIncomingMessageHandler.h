@interface IMDiMessageIncomingMessageHandler : NSObject

- (void)handleMessageMarkUnreadRequestWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleSyndicatedActionWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessagePlayedReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageDeliveryReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleEditMessageCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageDeliveredQuietlyReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleMessageWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleChatSessionCloseWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)_enqueueBlock:(id /* block */)a0 withTimeout:(double)a1 description:(id)a2;
- (void)handleMessageReadReceiptWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleRecoverJunkCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleNotifyRecipientCommandWithPipeline:(id)a0 input:(id)a1 completionBlock:(id /* block */)a2;

@end
