@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    BOOL _isDepthTexture;
}

- (BOOL)isDepthTexture;
- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)access;
- (unsigned long long)textureDataType;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)a0 textureType:(unsigned long long)a1 access:(unsigned long long)a2 isDepthTexture:(BOOL)a3;
- (BOOL)isEqual:(id)a0;

@end
