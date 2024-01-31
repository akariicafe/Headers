@interface HMDDataStreamMessageCoder : NSObject

+ (id)_buildUnencryptedOPACKHeader:(id)a0 payload:(id)a1 error:(id *)a2;
+ (BOOL)_decodeOPACKFrame:(id)a0 receivedHeader:(id *)a1 receivedPayload:(id *)a2 error:(id *)a3;
+ (BOOL)_decryptEncryptedOPACKFrame:(id)a0 sessionEncryption:(id)a1 receivedHeader:(id *)a2 receivedPayload:(id *)a3 error:(id *)a4;
+ (id)_encodeOPACKHeader:(id)a0 payload:(id)a1 error:(id *)a2;
+ (id)_encryptEncryptedOPACKHeader:(id)a0 payload:(id)a1 sessionEncryption:(id)a2 error:(id *)a3;
+ (BOOL)_unpackUnencryptedOPACKFrame:(id)a0 receivedHeader:(id *)a1 receivedPayload:(id *)a2 error:(id *)a3;
+ (id)buildUnencryptedOPACKHeader:(id)a0 payload:(id)a1 error:(id *)a2;
+ (BOOL)decryptEncryptedOPACKFrame:(id)a0 sessionEncryption:(id)a1 receivedHeader:(id *)a2 receivedPayload:(id *)a3 error:(id *)a4;
+ (id)encryptEncryptedOPACKHeader:(id)a0 payload:(id)a1 sessionEncryption:(id)a2 error:(id *)a3;
+ (id)eventHeaderForProtocol:(id)a0 topic:(id)a1;
+ (BOOL)readHeaderFromPartialData:(id)a0 frameType:(unsigned char *)a1 payloadLength:(unsigned long long *)a2;
+ (BOOL)readHeaderFromPartialData:(const char *)a0 length:(unsigned long long)a1 frameType:(unsigned char *)a2 payloadLength:(unsigned long long *)a3;
+ (id)requestHeaderForProtocol:(id)a0 topic:(id)a1 identifier:(id)a2;
+ (id)responseHeaderForRequestHeader:(id)a0 status:(unsigned short)a1;
+ (BOOL)unpackUnencryptedOPACKFrame:(id)a0 receivedHeader:(id *)a1 receivedPayload:(id *)a2 error:(id *)a3;

@end
