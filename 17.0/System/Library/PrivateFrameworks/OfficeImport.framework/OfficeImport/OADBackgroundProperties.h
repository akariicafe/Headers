@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (unsigned long long)hash;
- (id)effects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fill;
- (void)setFill:(id)a0;
- (void)setEffects:(id)a0;

@end
