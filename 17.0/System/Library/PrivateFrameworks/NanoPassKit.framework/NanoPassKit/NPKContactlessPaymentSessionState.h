@class NSUUID, NSDate, NPKContactlessPaymentSessionManagerTransactionContext, PKPass;

@interface NPKContactlessPaymentSessionState : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) PKPass *currentPass;
@property (retain, nonatomic) NSUUID *uniqueID;
@property (nonatomic) BOOL hasSession;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) BOOL sessionStarted;
@property (nonatomic) BOOL sessionWaitingToStart;
@property (nonatomic) BOOL isSwitchingSessionType;
@property (nonatomic) BOOL doublePressReceived;
@property (retain, nonatomic) NSDate *doublePressTimestamp;
@property (nonatomic) BOOL sessionAuthorized;
@property (nonatomic) BOOL passActivating;
@property (nonatomic) BOOL contactlessInterfaceReady;
@property (nonatomic) BOOL canChangePass;
@property (retain, nonatomic) PKPass *serviceModeRequestedPass;
@property (nonatomic) BOOL inServiceMode;
@property (nonatomic) unsigned long long expressTransactionStatus;
@property (nonatomic) unsigned long long failureType;
@property (nonatomic) unsigned long long completionReason;
@property (retain, nonatomic) NPKContactlessPaymentSessionManagerTransactionContext *transactionContext;

+ (id)_timestampDateFormatter;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)validityInterval;
- (BOOL)isSessionStateValid;
- (id)stateForNonModalDisplay;
- (BOOL)userRejectedReleaseData;

@end
