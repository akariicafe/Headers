@interface VisionCoreE5RTUtils : NSObject

+ (BOOL)getPixelFormatType:(unsigned int *)a0 forSurfaceFormat:(int)a1 error:(id *)a2;
+ (BOOL)getTensorDataType:(unsigned long long *)a0 forTensorDescriptor:(struct e5rt_tensor_desc { } *)a1 error:(id *)a2;
+ (BOOL)getType:(unsigned long long *)a0 ofIOPort:(struct e5rt_io_port { } *)a1 error:(id *)a2;
+ (id)stringsForHandle:(void *)a0 fromCountProc:(void /* function */ *)a1 stringsProc:(void /* function */ *)a2 error:(id *)a3;

@end
