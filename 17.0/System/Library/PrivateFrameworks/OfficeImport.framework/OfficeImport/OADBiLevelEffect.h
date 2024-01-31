@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (id)init;
- (unsigned long long)hash;
- (float)threshold;
- (void)setThreshold:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
