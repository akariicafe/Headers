@interface VisionCoreMutableNamedObjects : VisionCoreNamedObjects

- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)assignPixelBuffer:(struct __CVBuffer { } *)a0 toName:(id)a1 error:(id *)a2;
- (BOOL)assignData:(id)a0 toName:(id)a1 error:(id *)a2;
- (BOOL)assignObject:(id)a0 toName:(id)a1 error:(id *)a2;
- (BOOL)assignSurface:(struct __IOSurface { } *)a0 toName:(id)a1 error:(id *)a2;
- (void)removeAssignmentForName:(id)a0;

@end
