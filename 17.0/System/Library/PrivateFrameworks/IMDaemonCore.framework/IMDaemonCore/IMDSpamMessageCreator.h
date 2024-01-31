@interface IMDSpamMessageCreator : NSObject

- (void)_reportToIDSTextMessageSpam:(id)a0;
- (void)_reportToIDSiMessageSpam:(id)a0;
- (BOOL)hasDataDetectedInformalPayment:(id)a0;
- (BOOL)_isMessageMMS:(id)a0 forChat:(id)a1;
- (BOOL)_textMessageReportToIDSAllowedForMessageItem:(id)a0 chat:(id)a1 notifyInternalSecurity:(BOOL)a2;
- (void)addTextMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 chat:(id)a2 receiverURI:(id)a3;
- (void)addiMessageJunkKeysToReportMessageDictionary:(id)a0 forMessage:(id)a1 withGUID:(id)a2 contentLength:(unsigned long long)a3 chat:(id)a4;
- (BOOL)isSurfPayment:(id)a0;
- (id)metaDataForSurfURL:(id)a0;
- (void)reportMessageDictionariesForMessages:(id)a0 withLastAddressedHandle:(id)a1 maxMessageLength:(unsigned long long)a2 isAutoReport:(BOOL)a3 withChat:(id)a4 maxMessagesToReport:(unsigned long long)a5 totalMessageCount:(unsigned long long *)a6 notifyInternalSecurity:(BOOL)a7 isJunkReportedToCarrier:(BOOL)a8 iMessageReportSpamDictionaries:(id)a9 textMessageReportSpamDictionaries:(id)a10;
- (void)reportUnknownToIDS:(id)a0 messageID:(id)a1 isBlackholed:(BOOL)a2 isiMessageJunk:(BOOL)a3 messageServerTimestamp:(id)a4 toURI:(id)a5;
- (id)surfURLForIMMessageItem:(id)a0;
- (id)transferForGuid:(id)a0;

@end
