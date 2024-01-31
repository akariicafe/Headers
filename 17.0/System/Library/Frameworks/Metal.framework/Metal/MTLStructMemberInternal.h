@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {
    NSString *_name;
    unsigned long long _offset;
    unsigned short _dataType : 16;
    id _details;
    unsigned long long _argumentIndex;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long render_target;
@property (readonly) unsigned long long raster_order_group;

- (id)formattedDescription:(unsigned long long)a0;
- (id)dataTypeDescription;
- (unsigned long long)dataType;
- (BOOL)isMemberLayoutThreadSafeWith:(id)a0;
- (id)structType;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)argumentIndex;
- (void)dealloc;
- (id)arrayType;
- (id)pointerType;
- (unsigned long long)offset;
- (id)textureReferenceType;
- (id)initWithName:(id)a0 offset:(unsigned long long)a1 dataType:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 aluType:(unsigned long long)a4 indirectArgumentIndex:(unsigned long long)a5 render_target:(unsigned long long)a6 raster_order_group:(unsigned long long)a7 details:(id)a8;
- (id)indirectArgumentType;
- (id)name;
- (unsigned long long)indirectArgumentIndex;
- (BOOL)isEqual:(id)a0;

@end
