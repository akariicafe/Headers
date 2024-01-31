@interface MessageProtection.SKIncomingRatchet : MessageProtection.SKRatchet {
    void /* unknown type, empty encoding */ ratchet;
    void /* unknown type, empty encoding */ signingPublicKey;
    void /* unknown type, empty encoding */ messageKeys;
}

- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 index:(unsigned short)a1 signingKey:(id)a2 error:(id *)a3;
- (id)openStatusWithIndex:(unsigned long long)a0 encryptedMessage:(id)a1 authenticating:(id)a2 signature:(id)a3 error:(id *)a4;
- (id)signingKeyIdentifier;

@end
