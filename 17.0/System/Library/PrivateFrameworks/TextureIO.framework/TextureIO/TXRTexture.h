@class NSMutableArray;
@protocol TXRBufferAllocator;

@interface TXRTexture : NSObject <NSCopying> {
    id<TXRBufferAllocator> _bufferAllocator;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) BOOL cubemap;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long alphaInfo;
@property (readonly, nonatomic) NSMutableArray *mipmapLevels;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSourceProvider:(id)a0;
- (BOOL)exportToURL:(id)a0 error:(id *)a1;
- (id)copyWithPixelFormat:(unsigned long long)a0 options:(id)a1 bufferAllocator:(id)a2;
- (id)exportToAssetCatalogWithName:(id)a0 location:(id)a1 error:(id *)a2;
- (void)generateMipmapsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 filter:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithDimensions:(SEL)a0 pixelFormat:(unsigned long long)a1 alphaInfo:(unsigned long long)a2 mipmapLevelCount:(unsigned long long)a3 arrayLength:(unsigned long long)a4 cubemap:(BOOL)a5 bufferAllocator:(id)a6;
- (void)reformat:(unsigned long long)a0 gammaDegamma:(BOOL)a1 bufferAllocator:(id)a2 error:(id *)a3;

@end
