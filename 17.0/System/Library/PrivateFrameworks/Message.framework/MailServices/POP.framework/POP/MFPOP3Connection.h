@class NSMutableDictionary, NSString, NSData, NSMutableData;

@interface MFPOP3Connection : MFConnection {
    NSMutableData *_sendBuffer;
    NSMutableDictionary *_listResults;
    NSMutableDictionary *_messageIdsByNumber;
    NSMutableDictionary *_numbersByMessageId;
    NSData *_apopTimeStamp;
    unsigned long long _numberOfMessagesAvailable;
    unsigned char _state : 4;
    unsigned char _hidingPassword : 1;
    NSString *_accountURL;
}

+ (id)log;

- (id)capabilities;
- (id)init;
- (unsigned long long)serverMessageCount;
- (void).cxx_destruct;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (id)authenticationMechanisms;
- (BOOL)connectUsingAccount:(id)a0;
- (int)quit;
- (BOOL)startTLSForAccount:(id)a0;
- (int)_getListResults;
- (BOOL)_doBasicConnectionWithAccount:(id)a0;
- (int)_getUidlResults;
- (int)_apopWithUsername:(id)a0 password:(id)a1;
- (int)_getStatusFromReply;
- (int)_pass:(id)a0;
- (int)_readMultilineResponseWithMaxSize:(unsigned long long)a0 consumer:(id)a1;
- (int)_retrieveMessage:(unsigned long long)a0 ofSize:(unsigned long long)a1 consumer:(id)a2;
- (int)_sendCommand:(const char *)a0 withArguments:(id)a1;
- (int)_user:(id)a0;
- (id)copyMessageHeaderForMessageNumber:(unsigned long long)a0;
- (id)copyReplyLineData;
- (int)dele:(unsigned long long)a0;
- (int)deleteMessagesOnServer:(id)a0;
- (void)disableAPOP;
- (int)doStat;
- (int)fetchMessages:(id)a0;
- (int)fetchMessages:(id)a0 intoQueue:(id)a1 serverIDsByNumber:(id)a2;
- (int)getMessageNumbers:(id *)a0 andMessageIdsByNumber:(id *)a1;
- (int)getMessageNumbers:(id *)a0 messageIdsByNumber:(id *)a1 numbersByMessageId:(id *)a2;
- (int)getTop:(int)a0 ofMessageNumber:(unsigned long long)a1 intoMutableData:(id)a2;
- (int)getTopOfMessageNumber:(unsigned long long)a0 intoMutableData:(id)a1;
- (id)idForMessageNumber:(long long)a0;
- (int)list:(int)a0;
- (BOOL)messagesAvailable;
- (unsigned long long)numberOfMessagesAvailable;
- (int)retr:(unsigned long long)a0 consumer:(id)a1 intoQueue:(id)a2 idsByNumber:(id)a3 allowIncomplete:(BOOL)a4 queueStatus:(BOOL *)a5;
- (int)retr:(unsigned long long)a0 data:(id *)a1;
- (int)retr:(unsigned long long)a0 dataConsumer:(id)a1;
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)a0;
- (BOOL)supportsAPOP;

@end
