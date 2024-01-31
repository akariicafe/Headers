@interface OADAutoNumberBulletProperties : OADBulletProperties {
    int mSchemeType;
    unsigned long long mStartIndex;
}

- (unsigned long long)hash;
- (unsigned long long)startIndex;
- (BOOL)isEqual:(id)a0;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)a0 startIndex:(unsigned long long)a1;

@end
