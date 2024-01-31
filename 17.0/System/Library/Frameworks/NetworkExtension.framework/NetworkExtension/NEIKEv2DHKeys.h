@class NSData;

@interface NEIKEv2DHKeys : NSObject {
    int _type;
    unsigned long long _group;
    NSData *_prime;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_privateKeyRef;
    NSData *_publicKey;
    unsigned long long _publicKeySize;
    struct OpaqueSecDHContext { } *_context;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
