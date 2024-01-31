@interface WTFContextualizedNSString : NSString {
    struct StringView { void *m_characters; unsigned int m_length; BOOL m_is8Bit; } context;
    struct StringView { void *m_characters; unsigned int m_length; BOOL m_is8Bit; } contents;
}

- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithContext:(struct StringView { void *x0; unsigned int x1; BOOL x2; })a0 contents:(struct StringView { void *x0; unsigned int x1; BOOL x2; })a1;

@end
