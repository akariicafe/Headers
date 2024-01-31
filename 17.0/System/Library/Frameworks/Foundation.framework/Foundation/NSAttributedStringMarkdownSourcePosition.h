@interface NSAttributedStringMarkdownSourcePosition : NSObject <NSCopying, NSSecureCoding> {
    struct { long long utf8Offset; long long utf16Offset; long long utf8NextCodePoint; long long utf16CurrentCodePointLength; long long line; long long column; } _startOffsets;
    struct { long long utf8Offset; long long utf16Offset; long long utf8NextCodePoint; long long utf16CurrentCodePointLength; long long line; long long column; } _endOffsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long startLine;
@property (readonly) long long startColumn;
@property (readonly) long long endLine;
@property (readonly) long long endColumn;

+ (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })calculateOffsetsForLine:(long long)a0 column:(long long)a1 inString:(const char *)a2 size:(unsigned long long)a3 withExistingOffsets:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })a4;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStart:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })a0 end:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })a1;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })endOffsets;
- (id)initWithStartLine:(long long)a0 startColumn:(long long)a1 endLine:(long long)a2 endColumn:(long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInString:(id)a0;
- (void)setOffsetsFromUTF8:(const char *)a0 size:(unsigned long long)a1 usingCache:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; } *)a2;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })startOffsets;

@end
