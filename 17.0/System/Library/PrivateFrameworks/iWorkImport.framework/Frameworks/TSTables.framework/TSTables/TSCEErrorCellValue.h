@interface TSCEErrorCellValue : TSCECellValue {
    struct TSCEErrorValue { void /* function */ **x0; id x1; } *_errorValue;
}

- (id)displayString;
- (id)format;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)canonicalKeyString;
- (struct TSCEErrorValue { void /* function */ **x0; id x1; } *)errorValue;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithErrorValue:(struct TSCEErrorValue { void /* function */ **x0; id x1; } *)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })tsceValue;

@end
