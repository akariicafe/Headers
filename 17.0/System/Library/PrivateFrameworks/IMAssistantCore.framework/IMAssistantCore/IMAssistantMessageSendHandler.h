@class NSString;
@protocol IMAssistantMessageSendHandlerDelegate;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {
    NSString *_conversationIdentifierResolvedDuringRecipientResolution;
}

@property (retain, nonatomic) id<IMAssistantMessageSendHandlerDelegate> messageSendHandlerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)confirmSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)handleSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveContentForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveOutgoingMessageTypeForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveRecipientsForSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)resolveSpeakableGroupNameForSendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (id)makeIMMessageFromSharedLinkURL:(id)a0;
- (BOOL)canSendLocationMessageWithLocationManager:(id)a0 withError:(long long *)a1;
- (id)contactResolutionResultForContacts:(id)a0 matchingRecipient:(id)a1;
- (id)contactsWithDuplicateNamesAmongContacts:(id)a0;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)a0;
- (id)handleResolutionResultForHandles:(id)a0 resolvedContactForAlternatives:(id)a1 recipient:(id)a2;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 intentIdentifier:(id)a2;
- (void)isSensitiveFileAttachmentURLs:(id)a0 chat:(id)a1 completion:(id /* block */)a2;
- (id)makeIMMessageFromText:(id)a0;
- (id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)a0;
- (BOOL)recipientHandleResolutionResultsAllowedByScreentime:(id)a0 error:(id *)a1;
- (id)recipientsResolutionFailureResultWithResult:(id)a0 forRecipient:(id)a1 amongRecipients:(id)a2;
- (id)resolveMessageContentWithString:(id)a0;
- (id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)a0 withMatchingHandlesByRecipient:(id)a1 fromChats:(id)a2;
- (void)resolveRecipientsWithCRR:(id)a0 forIntent:(id)a1 completion:(id /* block */)a2;
- (id)resolveRecipientsWithGroupNameOrConversationIdentifier:(id)a0 forIntent:(id)a1;
- (void)resolveRecipientsWithoutCRR:(id)a0 forIntent:(id)a1 completion:(id /* block */)a2;
- (id)resolvedRecipientsFromChat:(id)a0;
- (void)sendFileAttachmentURLs:(id)a0 chat:(id)a1 executionContext:(long long)a2 expressiveSendStyleID:(id)a3 idsIdentifier:(id)a4 sourceApplicationID:(id)a5 sentMessages:(id)a6 completion:(id /* block */)a7;
- (void)sendLocalFileAttachmentURLs:(id)a0 chat:(id)a1 executionContext:(long long)a2 expressiveSendStyleID:(id)a3 idsIdentifier:(id)a4 sourceApplicationID:(id)a5 sentMessages:(id)a6 completion:(id /* block */)a7;
- (void)sendLocationMessageToChat:(id)a0 sourceApplicationID:(id)a1 sentMessages:(id)a2 completion:(id /* block */)a3;
- (BOOL)sendMessageWithDraft:(id)a0 expressiveSendStyleID:(id)a1 idsIdentifier:(id)a2 executionContext:(long long)a3 sourceApplicationID:(id)a4 toChat:(id)a5;
- (void)sendMessagesWithText:(id)a0 currentLocation:(BOOL)a1 sharedLinkURL:(id)a2 audioMessageAttachment:(id)a3 photoLibraryAttachment:(id)a4 fileAttachments:(id)a5 expressiveSendStyleID:(id)a6 idsIdentifier:(id)a7 executionContext:(long long)a8 toChat:(id)a9 completion:(id /* block */)a10;
- (void)sendPhotoAssetMessageToChat:(id)a0 executionContext:(long long)a1 expressiveSendStyleID:(id)a2 idsIdentifier:(id)a3 phAsset:(id)a4 sentMessages:(id)a5 sourceApplicationID:(id)a6 completion:(id /* block */)a7;
- (BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)a0 nextChat:(id)a1;
- (BOOL)updateSenderIdentityForNewlyCreatedChat:(id)a0;

@end
