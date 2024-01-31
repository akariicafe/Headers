@class NSString, TXRTexture;

@interface GLKTextureTXR : NSObject {
    unsigned int _loadTarget;
    TXRTexture *_texture;
    unsigned long long _API;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int depth;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL lossyCompressedSource;

- (void)dealloc;
- (id)initWithTexture:(id)a0 API:(unsigned long long)a1 options:(id)a2 error:(id *)a3;
- (BOOL)uploadToGLTexture:(unsigned int)a0 error:(id *)a1;

@end
