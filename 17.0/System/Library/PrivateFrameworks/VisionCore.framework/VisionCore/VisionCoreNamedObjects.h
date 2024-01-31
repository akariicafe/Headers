@class NSArray, NSDictionary;

@interface VisionCoreNamedObjects : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {
    NSDictionary *_objects;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allNames;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)accessReadOnlyDataForName:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithNamedObjects:(id)a0;
- (id)dataForName:(id)a0 error:(id *)a1;
- (id)_initWithRetainedDictionary:(id)a0;
- (id)objectOfClass:(Class)a0 forName:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)pixelBufferForName:(id)a0 error:(id *)a1;
- (struct __IOSurface { } *)surfaceAssociatedWithName:(id)a0 error:(id *)a1;
- (struct __IOSurface { } *)surfaceForName:(id)a0 error:(id *)a1;

@end
