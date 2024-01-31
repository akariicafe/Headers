@class NSArray, NSString, NSDictionary, GKMatchRequestInternal, NSObject;
@protocol OS_dispatch_queue;

@interface GKMatchRequest : NSObject <GKReportable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) GKMatchRequestInternal *internal;
@property (readonly, nonatomic) BOOL hasFutureRecipientProperties;
@property unsigned long long minPlayers;
@property unsigned long long maxPlayers;
@property unsigned long long playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray *recipients;
@property (copy) NSString *inviteMessage;
@property unsigned long long defaultNumberOfPlayers;
@property BOOL restrictToAutomatch;
@property (copy) id /* block */ recipientResponseHandler;
@property (copy) id /* block */ inviteeResponseHandler;
@property (retain) NSArray *playersToInvite;
@property (copy) NSString *queueName;
@property (copy) NSDictionary *properties;
@property (copy) NSDictionary *recipientProperties;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)a0;
+ (id)reportableKeyPaths;
+ (id)sanitizeProperties:(id)a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)setProperties:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setRecipients:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)recipients;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)defaultNumberOfPlayersIsValid;
- (void)expectFutureRecipientPropertiesForPlayers:(id)a0;
- (id)guestPlayers;
- (id)inviteMessage;
- (BOOL)isIncorrectlyInvitingPlayers;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)a0;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)setInviteMessage:(id)a0;
- (void)setPlayersToInvite:(id)a0;
- (void)updateRecipientProperties:(id)a0;
- (id)validateForHosted:(BOOL)a0;
- (id)validateForTurnBased;
- (id)playersToInvite;
- (void)ensureValidityHosted:(BOOL)a0;
- (BOOL)isConfiguredForAutomatchOnly;
- (BOOL)isRecipientCountValid;
- (void)updateRecipientProperties:(id)a0 forPlayer:(id)a1 withSanitization:(BOOL)a2;
- (id)validateForHosted:(BOOL)a0 turnBased:(BOOL)a1;
- (id)validateNumbersOfPlayersWithMax:(unsigned long long)a0;

@end
