@class AFBBufRef;

@interface TRIFBImmutableBoxedInt64 : TRIFBBoxedInt64 <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedInt64 { long long x0; } *_ptr;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)val;
- (const struct BoxedInt64 { long long x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
