@class MTLStructTypeInternal;

@interface MTLBuiltInMeshArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
    unsigned short _meshVertexCount;
    unsigned short _meshPrimitiveCount;
    unsigned short _meshTopologyType;
    MTLStructTypeInternal *_meshVertexStruct;
    MTLStructTypeInternal *_meshPrimitiveStruct;
}

- (unsigned long long)builtInDataType;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)meshVertexCount;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6 meshVertexStructType:(id)a7 meshPrimitiveStructType:(id)a8 meshVertexCount:(unsigned short)a9 meshPrimitiveCount:(unsigned short)a10 meshTopologyType:(unsigned long long)a11;
- (id)meshPrimitiveStruct;
- (BOOL)isEqual:(id)a0;
- (id)meshVertexStruct;
- (unsigned long long)builtInType;
- (unsigned long long)meshPrimitiveCount;
- (unsigned long long)meshTopologyType;

@end
