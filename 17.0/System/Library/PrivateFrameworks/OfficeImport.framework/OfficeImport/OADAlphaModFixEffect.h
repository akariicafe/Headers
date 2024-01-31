@interface OADAlphaModFixEffect : OADBlipEffect {
    float mAlpha;
}

- (id)init;
- (unsigned long long)hash;
- (float)alpha;
- (void)setAlpha:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
