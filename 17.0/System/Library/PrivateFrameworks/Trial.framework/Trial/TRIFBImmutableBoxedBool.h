@class AFBBufRef;

@interface TRIFBImmutableBoxedBool : TRIFBBoxedBool <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedBool { unsigned char x0; } *_ptr;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)val;
- (const struct BoxedBool { unsigned char x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
