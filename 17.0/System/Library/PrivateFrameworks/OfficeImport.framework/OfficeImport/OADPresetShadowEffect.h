@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)equivalentOuterShadowEffect;
- (int)presetShadowType;
- (void)setPresetShadowType:(int)a0;

@end
