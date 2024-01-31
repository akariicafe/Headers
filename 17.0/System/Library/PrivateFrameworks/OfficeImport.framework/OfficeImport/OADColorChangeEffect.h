@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toColor;
- (id)fromColor;
- (void)setFromColor:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setToColor:(id)a0;

@end
