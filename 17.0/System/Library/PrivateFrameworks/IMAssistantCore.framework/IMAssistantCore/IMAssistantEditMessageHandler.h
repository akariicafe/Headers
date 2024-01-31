@class NSString;

@interface IMAssistantEditMessageHandler : IMAssistantMessageQueryHandler <INEditMessageIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmEditMessage:(id)a0 completion:(id /* block */)a1;
- (void)handleEditMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveEditedContentForEditMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)chatsForMessageIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)sendEditedMessageItem:(id)a0 originalMessageItem:(id)a1 chat:(id)a2 backwardCompatabilityText:(id)a3;

@end
