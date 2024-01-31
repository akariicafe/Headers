@interface OADPresetTextWarp : OADTextWarp {
    unsigned char mPresetTextWarpType;
}

+ (id)stringWithPresetTextWarpType:(unsigned char)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned char)presetTextWarpType;
- (void)setPresetTextWarpType:(unsigned char)a0;

@end
