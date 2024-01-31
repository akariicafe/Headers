@class NSString;

@interface TSDGLFrameBufferTextureLookupInfo : NSObject

@property (nonatomic) unsigned int attachment;
@property (nonatomic) long long indexOnAttachment;
@property (readonly, nonatomic) unsigned int textureName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } textureSize;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int target;
@property (nonatomic, getter=isValid) BOOL valid;

+ (id)invalidTextureLookupInfo;
+ (id)textureLookupInfoWithAttachment:(unsigned int)a0 indexOnAttachment:(long long)a1 textureName:(unsigned int)a2 textureSize:(struct CGSize { double x0; double x1; })a3 name:(id)a4 target:(unsigned int)a5;

- (void)dealloc;
- (id)description;
- (id)initWithAttachment:(unsigned int)a0 indexOnAttachment:(long long)a1 textureName:(unsigned int)a2 textureSize:(struct CGSize { double x0; double x1; })a3 name:(id)a4 target:(unsigned int)a5 valid:(BOOL)a6;
- (unsigned int)targetOfPossiblyInvalidInfo;

@end
