@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (float)contrast;
- (id)init;
- (void)setContrast:(float)a0;
- (unsigned long long)hash;
- (void)setBrightness:(float)a0;
- (float)brightness;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
