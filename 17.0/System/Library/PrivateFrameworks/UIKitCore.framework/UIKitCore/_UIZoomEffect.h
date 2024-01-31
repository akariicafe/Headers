@interface _UIZoomEffect : UIVisualEffect {
    double _zoomAmount;
    BOOL _isUnderlay;
}

+ (BOOL)supportsSecureCoding;
+ (id)_underlayZoomEffectWithMagnitude:(double)a0;
+ (id)zoomEffectWithMagnitude:(double)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_viewEntry;

@end
