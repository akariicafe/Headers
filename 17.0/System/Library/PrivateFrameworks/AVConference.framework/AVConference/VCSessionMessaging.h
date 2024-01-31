@class NSString, NSMutableDictionary;

@interface VCSessionMessaging : NSObject <VCControlChannelDelegate> {
    NSMutableDictionary *topics;
    id controlChannelWeak;
    NSMutableDictionary *participants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)newPackedMessageFromDictionary:(id)a0;
- (void)addParticipant:(id)a0 controlChannelProtocolVersion:(int)a1;
- (void)addTopic:(id)a0 associatedStrings:(id)a1 allowConcurrent:(BOOL)a2 receiveHandler:(id /* block */)a3;
- (void)addTopic:(id)a0 associatedStrings:(id)a1 allowConcurrent:(BOOL)a2 requireReliable:(BOOL)a3 sendMessageDictionaryCompletionHandler:(id /* block */)a4 receiveMessageDictionaryHandler:(id /* block */)a5;
- (void)addTopic:(id)a0 associatedStrings:(id)a1 allowConcurrent:(BOOL)a2 sendCompletionHandler:(id /* block */)a3 receiveHandler:(id /* block */)a4;
- (void)addTopic:(id)a0 associatedStrings:(id)a1 allowConcurrent:(BOOL)a2 sendMessageDictionaryCompletionHandler:(id /* block */)a3 receiveMessageDictionaryHandler:(id /* block */)a4;
- (id)allocMessageFromPayload:(id)a0 forTopic:(id)a1 participantID:(id)a2;
- (void)controlChannel:(id)a0 clearTransactionCacheForParticipant:(id)a1;
- (void)controlChannel:(id)a0 receivedMessage:(id)a1 transactionID:(unsigned int)a2 fromParticipant:(id)a3;
- (void)controlChannel:(id)a0 sendReliableMessage:(id)a1 didSucceed:(BOOL)a2 toParticipant:(id)a3;
- (void)controlChannel:(id)a0 topic:(id)a1 payload:(id)a2 transactionID:(unsigned int)a3 fromParticipant:(id)a4;
- (id)initWithControlChannel:(id)a0 remoteVersion:(id)a1;
- (id)newDictionaryFromUnpackedMessage:(id)a0;
- (id)newDictionaryFromUnpackedMessage:(id)a0 forTopic:(id)a1 controlChannelVersion:(int)a2;
- (id)newDictionaryFromUnpackedMessageV2:(id)a0;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)a0;
- (id)newPackedMessageFromDictionary:(id)a0 forTopic:(id)a1 controlChannelVersion:(int)a2;
- (id)newPackedMessageFromDictionaryV2:(id)a0;
- (id)newPackedMessageFromMomentsDictionary:(id)a0;
- (void)searchMatchingTopic:(id)a0 payload:(id)a1 transactionID:(unsigned int)a2 fromParticipant:(id)a3;
- (void)sendMessage:(id)a0 withTopic:(id)a1;
- (void)sendMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (void)sendMessageDictionary:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)startMessaging;
- (void)stopMessaging;

@end
