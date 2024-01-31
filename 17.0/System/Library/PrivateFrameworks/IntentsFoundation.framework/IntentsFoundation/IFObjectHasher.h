@interface IFObjectHasher : NSObject {
    struct SipHasher { int _c; int _d; unsigned long long _v0; unsigned long long _v1; unsigned long long _v2; unsigned long long _v3; struct TailBuffer { unsigned long long value; } _buffer; } _hasher;
    unsigned long long _hash;
    BOOL _finalized;
}

- (id)combineContentsOfPropertyListObject:(id)a0;
- (unsigned long long)finalize;
- (id)combineBool:(BOOL)a0;
- (id).cxx_construct;
- (id)combine:(id)a0;
- (id)combineInteger:(unsigned long long)a0;
- (id)combineBytes:(void *)a0 size:(unsigned long long)a1;

@end
