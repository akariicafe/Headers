@class NSArray;

@interface VCControlChannelDialogV1 : VCControlChannelDialog {
    NSArray *_optionalTopics;
}

+ (BOOL)encryptMessage:(id)a0 buffer:(char *)a1 size:(unsigned int)a2 sequenceNumber:(unsigned short)a3 transactionDelegate:(id)a4;
+ (id)newEncryptedMessageFromMessage:(id)a0 sequenceNumber:(unsigned short)a1 transactionDelegate:(id)a2;
+ (BOOL)processMessageFromParticipant:(id)a0 transactionID:(id)a1 messageType:(unsigned int)a2 sessionID:(unsigned int)a3 transactionDelegate:(id)a4;
+ (void)sendConfirmationToParticipantID:(id)a0 transactionID:(id)a1 sessionID:(unsigned int)a2 transactionDelegate:(id)a3;

- (void)dealloc;
- (BOOL)decryptMessageWithMKI:(void *)a0 message:(id)a1 buffer:(char *)a2 size:(unsigned int)a3 sequenceNumber:(unsigned short)a4;
- (void)getTopic:(id *)a0 message:(id *)a1 fromPayload:(id)a2;
- (id)initWithSessionID:(unsigned int)a0 participantID:(id)a1 participantUUID:(id)a2 optionalTopics:(id)a3 participantConfig:(struct { int x0; struct tagVCSecurityKeyHolder *x1; struct tagVCSecurityKeyHolder *x2; struct __CFData *x3; struct __CFData *x4; BOOL x5; } *)a4 transactionDelegate:(id)a5;
- (id)newDataFromMessage:(id)a0 topic:(id)a1 transactionID:(unsigned long long)a2 isReliable:(BOOL)a3 transactionDelegate:(id)a4;
- (id)processEncryptedPayload:(id)a0 isData:(BOOL)a1 topic:(id *)a2 sequenceNumber:(id)a3 MKIData:(id)a4 participantID:(id)a5;
- (id)processMessageData:(id)a0 participantID:(id)a1 topic:(id *)a2 transactionID:(id *)a3 messageStatus:(unsigned int *)a4 isInternalMessage:(BOOL *)a5;
- (BOOL)processMessageFromParticipant:(id)a0 transactionID:(id)a1 messageType:(unsigned int)a2 transactionDelegate:(id)a3;

@end
