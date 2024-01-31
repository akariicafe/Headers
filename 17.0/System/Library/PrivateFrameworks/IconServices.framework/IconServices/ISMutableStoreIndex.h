@class NSObject;
@protocol OS_dispatch_queue;

@interface ISMutableStoreIndex : ISStoreIndex

@property (readonly) unsigned long long initialCapacity;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void)removeAll;
- (BOOL)addValue:(const struct { unsigned char x0[16]; struct { double x0; double x1; } x1; double x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; struct { unsigned char x0[16]; unsigned long long x1; unsigned char x2[16]; } x6; } *)a0;
- (void)_extend;
- (id)data;
- (void)_extendData;
- (void).cxx_destruct;
- (BOOL)removeValueForUUID:(unsigned char[16])a0 passingTest:(id /* block */)a1;
- (id)initWithStoreFileURL:(id)a0 capacity:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;
- (BOOL)removeValuePassingTest:(id /* block */)a0;

@end
