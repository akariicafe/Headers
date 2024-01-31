@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive;
@property (copy) id /* block */ bufferFullHandler;
@property BOOL automaticallyEmitsObjects;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)bufferWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;
+ (id)bufferWithOutputQueue:(id)a0;

- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;

@end
