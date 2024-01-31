@class NSAttributedString, NSString, NSArray, IMDChat, IMDiMessageIDSTrustedData, IMDAccount, NSNumber, IMDServiceSession;

@interface IMEditMessageCommandPipelineParameter : NSObject <IMFindAccountProcessingParameter, IMEditMessageCommandProcessingParameter, IMMessageFromStorageParameter>

@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) NSString *editCommandGUID;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (readonly, nonatomic) NSString *editedMessageGUID;
@property (readonly, nonatomic) long long editedMessagePartIndex;
@property (readonly, nonatomic) unsigned long long editType;
@property (readonly, nonatomic) NSAttributedString *editedMessagePartBody;
@property (readonly, nonatomic) NSArray *editedMessagePartFileTransferGUIDs;
@property (readonly, nonatomic) BOOL shouldRetractMessageSubject;
@property (readonly, nonatomic) BOOL hasEditTypeAndPartIndex;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)GUID;
- (id)description;
- (void).cxx_destruct;
- (id)_createSuperFormattedStringWithAttributedString:(id)a0;
- (id)_existingFileTransfersForMessageGuid:(id)a0;
- (unsigned long long)_messageItemEditTypeForBlastdoorEditType:(long long)a0;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;
- (id)initWithIdsTrustedData:(id)a0 editCommandGUID:(id)a1 timestamp:(id)a2 isFromStorage:(BOOL)a3 isLastFromStorage:(BOOL)a4 editedMessageGUID:(id)a5 editedMessagePartIndex:(long long)a6 editType:(unsigned long long)a7 editedMessagePartBody:(id)a8 editedMessagePartFileTransferGUIDs:(id)a9 shouldRetractMessageSubject:(BOOL)a10 hasEditTypeAndPartIndex:(BOOL)a11;

@end
