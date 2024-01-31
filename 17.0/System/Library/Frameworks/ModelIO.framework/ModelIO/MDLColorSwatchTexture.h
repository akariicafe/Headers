@interface MDLColorSwatchTexture : MDLTexture {
    float _colorTemperature1;
    float _colorTemperature2;
    struct CGColor { } *_color1;
    struct CGColor { } *_color2;
    int _type;
}

- (id)generateDataAtLevel:(long long)a0 selector:(SEL)a1;
- (id)initWithColorGradientFrom:(SEL)a0 toColor:(struct CGColor { } *)a1 name:(struct CGColor { } *)a2 textureDimensions:(id)a3;
- (id)initWithColorTemperatureGradientFrom:(SEL)a0 toColorTemperature:(float)a1 name:(float)a2 textureDimensions:(id)a3;

@end
