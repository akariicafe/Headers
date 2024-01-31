@interface IDSSessionInfoMetadataSerializer : NSObject

+ (id)serializeSessionInfoMetadata:(id)a0;
+ (void)_writeArrayToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (id)deserializeSessionInfoMetadata:(id)a0;
+ (id)_readArrayFromByteArray:(char *)a0 fieldByteSize:(unsigned short)a1 byteBuffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a2;
+ (id)_readDictionaryFromByteArray:(char *)a0 fieldByteSize:(unsigned short)a1 byteBuffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a2;
+ (void)_writeDictionaryToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (void)_writeNumberToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;
+ (void)_writeStringToByteBuffer:(id)a0 buffer:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a1;

@end
