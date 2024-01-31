@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject {
    void /* unknown type, empty encoding */ spakeCtxData;
    void /* unknown type, empty encoding */ aad;
    void /* unknown type, empty encoding */ X;
    void /* unknown type, empty encoding */ z0_self;
    void /* unknown type, empty encoding */ z1_self;
}

- (id)init;
- (void).cxx_destruct;
- (id)getX;
- (id)initWithPassword:(id)a0 salt:(id)a1 authenticatedData:(id)a2 keyDerivationCost:(unsigned long long)a3;
- (id)processResponseWithY:(id)a0 M1:(id)a1;

@end
