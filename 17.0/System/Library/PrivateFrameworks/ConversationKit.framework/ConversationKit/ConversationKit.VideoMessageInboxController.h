@interface ConversationKit.VideoMessageInboxController : _TtCs12_SwiftObject <_FTMSMessageStoreControllerDelegate> {
    void /* unknown type, empty encoding */ _callItems;
    void /* unknown type, empty encoding */ _loadInProgress;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageDeletionHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageStoreController;
}

- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidUpdateMessages:(id)a0;

@end
