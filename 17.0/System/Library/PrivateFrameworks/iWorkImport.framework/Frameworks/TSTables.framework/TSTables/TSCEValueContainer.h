@interface TSCEValueContainer : NSObject {
    struct TSCEValue { union { struct { struct { unsigned long long w[2]; } _decimal; unsigned char _formatFake[32]; unsigned short _baseUnit; BOOL _isUnitlessZero; } DONT_USE_fakeTSCENumberValueStandIn; unsigned long long _buff[11]; } ; unsigned char _type; } mValue;
}

- (id)initWithValue:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })value;

@end
