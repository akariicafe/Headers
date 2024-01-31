@interface MDLNoiseTexture : MDLTexture {
    BOOL _vectorNoise;
    float _smoothness;
    BOOL _grayScale;
    float _frequency;
    int _noiseMode;
}

- (id)_generateCellularNoiseAtLevel:(long long)a0 selector:(SEL)a1;
- (id)generateDataAtLevel:(long long)a0 selector:(SEL)a1;
- (id)initCellularNoiseWithFrequency:(SEL)a0 name:(float)a1 textureDimensions:(id)a2 channelEncoding:(long long)a3;
- (id)initScalarNoiseWithSmoothness:(SEL)a0 name:(float)a1 textureDimensions:(id)a2 channelCount:(int)a3 channelEncoding:(long long)a4 grayscale:(BOOL)a5;
- (id)initVectorNoiseWithSmoothness:(SEL)a0 name:(float)a1 textureDimensions:(id)a2 channelEncoding:(long long)a3;

@end
