@interface TDreamMaskBlend : TDreamProgramWrapperTwoInput {
    int filterThirdTextureCoordinateAttribute;
    int filterInputThirdTextureUniform;
}

- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1;
- (void)initializeAttributes;
- (void)renderTo:(unsigned int)a0 from:(unsigned int)a1 andFrom:(unsigned int)a2 andFrom:(unsigned int)a3;

@end
