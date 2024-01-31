@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (id)init;
- (unsigned long long)hash;
- (id)foregroundColor;
- (void)setForegroundColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyleColor:(id)a0;

@end
