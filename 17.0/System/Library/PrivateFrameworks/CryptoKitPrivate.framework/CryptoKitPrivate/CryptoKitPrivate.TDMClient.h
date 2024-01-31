@interface CryptoKitPrivate.TDMClient : NSObject {
    void /* unknown type, empty encoding */ oprfClient;
    void /* unknown type, empty encoding */ input;
    void /* unknown type, empty encoding */ blind;
    void /* unknown type, empty encoding */ be;
}

- (id)init;
- (void).cxx_destruct;
- (id)blindedElement;
- (id)finalizeWithFSR:(id)a0 evaluatedElement:(id)a1 proof:(id)a2 publicKey:(id)a3 error:(id *)a4;
- (id)initWithTID:(id)a0;

@end
