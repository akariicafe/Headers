@class NSArray;

@interface MFMailMessageRelationshipAnalyzer : NSObject {
    NSArray *_messages;
    NSArray *_relationships;
}

+ (id)myEmailAddresses;
+ (BOOL)isMessageDraft:(id)a0;
+ (id)analysisOfConversation:(id)a0;
+ (id)analyzeMessages:(id)a0 myEmailAddresses:(id)a1;
+ (BOOL)isMessage:(id)a0 addressedToMailingListForMessage:(id)a1;
+ (BOOL)isMessage:(id)a0 addressedToPreviousSender:(id)a1;
+ (BOOL)isMessage:(id)a0 forwardOfMessage:(id)a1 myEmailAddresses:(id)a2;
+ (BOOL)isMessage:(id)a0 responseToMessage:(id)a1 previousSenders:(id)a2 myEmailAddresses:(id)a3;
+ (BOOL)isMessage:(id)a0 sentByAddress:(id)a1;
+ (id)recipientsOfMessage:(id)a0;
+ (unsigned long long)relationOfMessage:(id)a0 toMessage:(id)a1;
+ (unsigned long long)relationOfMessage:(id)a0 toMessage:(id)a1 previousSenders:(id)a2 myEmailAddresses:(id)a3;
+ (id)sendersOfMessage:(id)a0;

- (void)dealloc;
- (id)initWithMessages:(id)a0 relationships:(id)a1;
- (unsigned long long)relationOfMessage:(id)a0;

@end
