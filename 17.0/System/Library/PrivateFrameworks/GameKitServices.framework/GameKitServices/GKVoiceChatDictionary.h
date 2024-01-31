@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

@property unsigned int callID;
@property (readonly) unsigned int originalCallID;
@property long long nonce;

+ (BOOL)validateDictionary:(id)a0;
+ (BOOL)validateCancel:(id)a0;
+ (BOOL)validateInvite:(id)a0;
+ (id)dictionaryFromData:(id)a0;
+ (id)inviteDictionaryToParticipantID:(id)a0 fromParticipantID:(id)a1 connectionData:(id)a2 callID:(unsigned int)a3 focus:(BOOL)a4;
+ (BOOL)validateFocus:(id)a0;
+ (BOOL)validateReply:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setFocus:(BOOL)a0;
- (id)version;
- (id)description;
- (unsigned long long)response;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (id)participantID;
- (id)connectionData;
- (BOOL)isFocus;
- (id)remoteVCPartyID;
- (id)cancelDictionary;
- (id)createBlob;
- (id)focusDictionary:(BOOL)a0;
- (id)fromParticipantID;
- (BOOL)isCancelDictionary;
- (BOOL)isFocusDictionary;
- (BOOL)isInviteDictionary;
- (BOOL)isReplyDictionary;
- (id)localVCPartyID;
- (BOOL)matchesNonce:(long long)a0;
- (BOOL)matchesResponse:(id)a0;
- (id)replyDictionary:(unsigned long long)a0 connectionData:(id)a1 callID:(unsigned int)a2 focus:(BOOL)a3;
- (void)setFromParticipantID:(id)a0;
- (id)setLocalVCPartyID:(id)a0;
- (id)setRemoteVCPartyID:(id)a0;

@end
