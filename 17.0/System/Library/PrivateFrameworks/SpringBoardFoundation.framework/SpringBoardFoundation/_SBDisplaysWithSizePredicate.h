@interface _SBDisplaysWithSizePredicate : SBDisplayModePredicate {
    unsigned long long _diagonal;
    struct CGSize { double width; double height; } _nativePixelSize;
}

+ (id)fromDefaultsKey:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;
- (id)initWithDiagonal:(unsigned long long)a0 pixelSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDisplay:(id)a0 useNativeSize:(BOOL)a1;

@end
