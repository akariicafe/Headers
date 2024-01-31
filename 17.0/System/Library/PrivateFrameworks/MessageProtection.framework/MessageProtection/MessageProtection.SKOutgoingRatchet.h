@interface MessageProtection.SKOutgoingRatchet : NSObject {
    void /* unknown type, empty encoding */ ratchet;
    void /* unknown type, empty encoding */ signingKey;
    void /* unknown type, empty encoding */ currentSubscriptionKey;
    void /* unknown type, empty encoding */ currentMessageKey;
}

+ (id)generate;

- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)serializedData;
- (void).cxx_destruct;
- (id)currentSubscriptionKeys;
- (BOOL)ratchetForward;
- (id)sealMessage:(id)a0 authenticating:(id)a1 error:(id *)a2;
- (id)signingKeyIdentifier;

@end
