@class NSData, NSString, NSArray, NSDate, GKTurnBasedParticipant, GKTurnBasedExchangeInternal, GKDaemonProxy, GKTurnBasedMatch;

@interface GKTurnBasedExchange : NSObject {
    GKDaemonProxy *_daemonProxy;
}

@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *replies;
@property (retain, nonatomic) NSString *exchangeID;
@property (retain, nonatomic) GKTurnBasedParticipant *sender;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) NSString *exchangeID;
@property (retain, nonatomic) GKTurnBasedParticipant *sender;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (readonly, nonatomic) char status;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *sendDate;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

@end
