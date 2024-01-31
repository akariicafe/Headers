@interface TSUIOUtils : NSObject

+ (struct CGDataProvider { } *)newCGDataProviderForInputStream:(id)a0;
+ (void)readAllFromChannel:(id)a0 offset:(long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)readWithHandlerAndWait:(id)a0 handler:(id /* block */)a1;
+ (struct CGDataProvider { } *)newCGDataProviderForReadChannel:(id)a0 length:(unsigned long long)a1;
+ (void)readFromOffsetAndWait:(id)a0 offset:(long long)a1 length:(unsigned long long)a2 handler:(id /* block */)a3;
+ (struct CGDataProvider { } *)newCGDataProviderForInputStream:(id)a0 outInfo:(void **)a1 outCallbacks:(const struct CGDataProviderSequentialCallbacks **)a2;
+ (struct CGDataProvider { } *)newCGDataProviderForReadChannel:(id)a0 length:(unsigned long long)a1 outInfo:(void **)a2 outCallbacks:(const struct CGDataProviderSequentialCallbacks **)a3;
+ (void)readAllFromChannel:(id)a0 completion:(id /* block */)a1;

@end
