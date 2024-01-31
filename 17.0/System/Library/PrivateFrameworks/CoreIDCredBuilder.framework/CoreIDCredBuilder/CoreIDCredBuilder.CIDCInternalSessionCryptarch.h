@class NSData;

@interface CoreIDCredBuilder.CIDCInternalSessionCryptarch : NSObject {
    void /* unknown type, empty encoding */ sessionCryptarch;
}

@property (nonatomic, readonly) NSData *publicKey;

- (id)init;
- (void).cxx_destruct;
- (id)decryptWithData:(id)a0 error:(id *)a1;
- (BOOL)deriveSessionKeysWithSessionTranscript:(id)a0 ikm:(id)a1 error:(id *)a2;
- (id)encryptWithData:(id)a0 error:(id *)a1;
- (id)initWithRole:(unsigned long long)a0 curve:(unsigned long long)a1 variant:(unsigned long long)a2;
- (BOOL)setRemoteKey:(id)a0 error:(id *)a1;

@end
