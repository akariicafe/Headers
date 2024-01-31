@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes *_attributes;
}

- (unsigned long long)hash;
- (double)delay;
- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)isEqual:(id)a0;
- (id)factoryWithTimingFunction:(id)a0;

@end
