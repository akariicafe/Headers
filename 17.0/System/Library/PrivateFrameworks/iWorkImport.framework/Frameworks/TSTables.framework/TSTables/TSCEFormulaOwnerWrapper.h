@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying> {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _ownerUID;
}

@property (readonly, nonatomic) const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *ownerUID;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormulaOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)isEqualToTSCEFormulaOwnerWrapper:(id)a0;

@end
