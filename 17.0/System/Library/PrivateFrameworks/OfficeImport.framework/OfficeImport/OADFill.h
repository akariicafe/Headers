@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (BOOL)isOverridden;
- (unsigned long long)hash;
- (float)alpha;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
