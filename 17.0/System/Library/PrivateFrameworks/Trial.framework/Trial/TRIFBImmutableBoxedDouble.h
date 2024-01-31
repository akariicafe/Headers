@class AFBBufRef;

@interface TRIFBImmutableBoxedDouble : TRIFBBoxedDouble <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedDouble { double x0; } *_ptr;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)val;
- (const struct BoxedDouble { double x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
