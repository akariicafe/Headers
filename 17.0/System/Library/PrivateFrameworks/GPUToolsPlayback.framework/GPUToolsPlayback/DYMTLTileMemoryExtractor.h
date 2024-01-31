@class NSString, NSDictionary;
@protocol MTLDeviceSPI, DYMTLStatefulRenderCommandEncoder;

@interface DYMTLTileMemoryExtractor : NSObject {
    id<MTLDeviceSPI> _device;
    id<DYMTLStatefulRenderCommandEncoder> _renderEncoder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _tileSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _textureSize;
    NSString *_imageBlockSignature;
    unsigned long long _fragmentMemberIndex;
    BOOL _aliasImplicitImageBlock;
    BOOL _aliasImplicitImageBlockColor;
    unsigned long long _aliasImplicitImageBlockColorIndex;
    struct vector<DYMTLImageBlockArgument *, std::allocator<DYMTLImageBlockArgument *>> { struct DYMTLImageBlockArgument **__begin_; struct DYMTLImageBlockArgument **__end_; struct __compressed_pair<DYMTLImageBlockArgument **, std::allocator<DYMTLImageBlockArgument *>> { struct DYMTLImageBlockArgument **__value_; } __end_cap_; } _imageBlockArgumentsFromFragment;
    struct vector<DYMTLImageBlockArgument *, std::allocator<DYMTLImageBlockArgument *>> { struct DYMTLImageBlockArgument **__begin_; struct DYMTLImageBlockArgument **__end_; struct __compressed_pair<DYMTLImageBlockArgument **, std::allocator<DYMTLImageBlockArgument *>> { struct DYMTLImageBlockArgument **__value_; } __end_cap_; } _imageBlockArgumentsFromTile;
    NSDictionary *_dataTypeToTextureComponentTypeStringMap;
    NSDictionary *_dataTypeToTextureTypeForInvalidPixelFormatMap;
    NSDictionary *_dataTypeToImageBlockTypeStringMap;
    NSDictionary *_pixelFormatToDataTypeStringMap;
    NSDictionary *_dataTypeToChannelCount;
    unsigned long long _imageBlockStatus;
    unsigned long long _threadgroupStatus;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)harvestThreadgroupAtIndex:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)_createDataTypeToStringDictionary;
- (id)_generateFunctionFromImageBlockMember:(struct DYMTLImageBlockMember { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 WithIndex:(unsigned long long)a1;
- (id)_generateImageBlockShaderStringWithMember:(struct DYMTLImageBlockMember { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 index:(unsigned long long)a1;
- (id)_generateImageBlockStructMember:(struct DYMTLImageBlockMember { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 WithCurrentName:(id)a1 WithIndent:(unsigned long long)a2;
- (id)_generateIndentString:(unsigned long long)a0;
- (id)_generateKernelFunctionFromString:(id)a0 funcName:(id)a1;
- (id)_generateStringForWritingDataToTexture:(unsigned long long)a0;
- (id)_generateTextureFromImageBlockMember:(struct DYMTLImageBlockMember { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;
- (id)_generateThreadgroupShaderStringWithThreadgroupIndex:(unsigned long long)a0 size:(unsigned long long)a1;
- (id)_generateTileRenderPipelineStateWithTileFunction:(id)a0 renderPassDescriptor:(id)a1 renderPipelineState:(id)a2;
- (void)_processArgument:(id)a0 WithImageBlockVector:(void *)a1;
- (id)_processArrayType:(id)a0 WithProcessedArgument:(void *)a1 WithMemberName:(id)a2 WithCurrentName:(id)a3 WithIndent:(unsigned long long)a4;
- (id)_processStructMember:(id)a0 WithProcessedArgument:(void *)a1 WithMemberName:(id)a2 WithIndent:(unsigned long long)a3;
- (id)_processStructType:(id)a0 WithProcessedArgument:(void *)a1 WithMemberName:(id)a2 WithIndent:(unsigned long long)a3;
- (BOOL)encodeImageBlockDataReturn:(id)a0 isDrawCall:(BOOL)a1;
- (BOOL)getImageBlockStatus;
- (BOOL)getThreadgroupStatus;
- (void)harvestImageBlockData:(void *)a0;
- (id)initWithRenderEncoder:(id)a0 metalDevice:(id)a1 tileSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 texSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (BOOL)isArgumentExplicitImageBlock:(id)a0;
- (void)processReflection:(id)a0 isDrawCall:(BOOL)a1;

@end
