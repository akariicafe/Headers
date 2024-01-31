@interface IKCSSParseDeclarationList : IKCSSParseBlock {
    struct _NSRange { unsigned long long location; unsigned long long length; } __range;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (id)description;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
