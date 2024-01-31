@class IMDChat, NSString, NSArray, IMDAccount, IMDServiceSession, IMDiMessageIDSTrustedData, NSNumber;

@interface IMNotifyRecipientCommandPipelineParameter : NSObject <IMNotifyRecipientCommandProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter>

@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;
- (id)initWithIdsTrustedData:(id)a0 GUID:(id)a1 timestamp:(id)a2 isFromStorage:(BOOL)a3 isLastFromStorage:(BOOL)a4;

@end
