@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (id)_allEffects;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (long long)_expectedUsage;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateEffects:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEffects:(id)a0;

@end
