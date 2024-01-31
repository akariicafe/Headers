@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (readonly, nonatomic) EMMessage *referenceMessage;

+ (long long)conversationNotificationLevel;

- (id)_changeAction;
- (id)messageFlags;
- (void)_toggleFlagWithBuilder:(id)a0;
- (id)initWithReferenceMessage:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 reason:(long long)a4;

@end
