@interface CPMLStorageManager : NSObject

- (id)readValue:(id)a0 withDoublePtr:(double *)a1 withItemCount:(id)a2;
- (id)readValue:(id)a0 withIntPtr:(int *)a1 withItemCount:(id)a2;
- (id)readValue:(id)a0 withUIntPtr:(unsigned int *)a1 withItemCount:(id)a2;
- (id)writeValue:(id)a0 withDoublePtr:(double *)a1 withItemCount:(id)a2;
- (id)writeValue:(id)a0 withIntPtr:(int *)a1 withItemCount:(id)a2;
- (id)writeValue:(id)a0 withUIntPtr:(unsigned int *)a1 withItemCount:(id)a2;

@end
