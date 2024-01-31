@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (id)decodeMessage:(id)a0;
- (BOOL)isMmsConfigured;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withMoreToFollow:(BOOL)a3 withID:(unsigned int)a4;
- (struct { int x0; int x1; })send:(id)a0;
- (id)init;
- (void)dealloc;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)a0;
- (BOOL)simulateDeferredMessage;
- (struct { int x0; int x1; })sendMMS:(id)a0;
- (struct { int x0; int x1; })isDeliveryReportsEnabled:(BOOL *)a0;
- (struct { int x0; int x1; })sendMMSFromData:(id)a0 messageId:(unsigned int)a1 subSlot:(long long)a2;
- (int)incomingMessageCount;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 trackingID:(unsigned int *)a4;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)a0 andReplaceData:(id *)a1;
- (id)allIncomingMessages;
- (void)emergencySessionIntentStart:(id)a0;
- (id)incomingMessageWithId:(unsigned int)a0;
- (struct { int x0; int x1; })send:(id)a0 withMoreToFollow:(BOOL)a1;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 trackingID:(unsigned int *)a3;
- (BOOL)isMmsConfiguredForSub:(id)a0;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withID:(unsigned int)a4;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withID:(unsigned int)a3;
- (BOOL)getCharacterCountForSub:(id)a0 count:(long long *)a1 andMessageSplitThreshold:(long long *)a2 forSmsText:(id)a3;
- (void)setDeliveryReportsEnabled:(BOOL)a0;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withMoreToFollow:(BOOL)a4 withID:(unsigned int)a5;
- (BOOL)simulateSmsReceived:(id)a0;
- (BOOL)getCharacterCount:(long long *)a0 andMessageSplitThreshold:(long long *)a1 forSmsText:(id)a2;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2;
- (void)emergencySessionIntentEnd:(id)a0;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)a0;
- (BOOL)sendBinarySMS:(id)a0 trackingID:(unsigned int *)a1;
- (struct { int x0; int x1; })sendSMS:(id)a0 withMoreToFollow:(BOOL)a1 trackingID:(unsigned int *)a2;
- (void)addMessageOfType:(int)a0 toArray:(id)a1 withIdsFromArray:(id)a2;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3;
- (BOOL)isMmsEnabledForSub:(id)a0;
- (BOOL)isMmsEnabled;
- (id)encodeMessage:(id)a0;
- (struct { int x0; int x1; })isMmsEnabledForSub:(id)a0 enabled:(BOOL *)a1;

@end
