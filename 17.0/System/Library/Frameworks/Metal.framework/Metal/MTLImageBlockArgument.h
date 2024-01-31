@class MTLStructTypeInternal;

@interface MTLImageBlockArgument : MTLBindingInternal {
    unsigned long long _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)dealloc;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 index:(unsigned long long)a4 kind:(unsigned long long)a5 dataSize:(unsigned int)a6 masterStructMembers:(id)a7 aliasImplicitImageBlock:(BOOL)a8 aliasImplicitImageBlockRenderTarget:(unsigned int)a9;
- (unsigned long long)imageBlockDataSize;
- (BOOL)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (id)imageBlockMasterStructMembers;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)imageBlockKind;
- (void)setStructType:(id)a0;

@end
