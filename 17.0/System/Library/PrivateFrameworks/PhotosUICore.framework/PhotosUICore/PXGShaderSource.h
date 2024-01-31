@class NSString, NSDictionary;

@interface PXGShaderSource : NSObject <NSCopying> {
    NSDictionary *_sourceByShaderFunction;
}

@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) NSString *otherSource;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) long long length;

- (id)initWithSource:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_parseShader;
- (id)sourceForShaderFunction:(id)a0;

@end
