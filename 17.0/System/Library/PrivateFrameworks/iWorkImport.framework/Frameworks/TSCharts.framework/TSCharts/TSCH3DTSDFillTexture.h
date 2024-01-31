@class TSDFill;

@interface TSCH3DTSDFillTexture : TSCH3DTexture {
    TSDFill *_fill;
}

+ (id)textureWithTSDFill:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)databufferForDataCache:(id)a0;
- (id)initWithTSDFill:(id)a0;

@end
