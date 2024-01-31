@interface TSCEMutableUIDSet : TSCEUIDSet

- (BOOL)addUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)removeUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)addUuidsFromVector:(const void *)a0;
- (void)addUUIDs:(const void *)a0;
- (void)addUuidsFromSet:(id)a0;
- (void)removeAllUuids;
- (void)removeUUIDs:(const void *)a0;
- (BOOL)removeUuidsFromSet:(id)a0;
- (void)removeUuidsFromVector:(const void *)a0;
- (id)addUuidsFromSetReturningAdded:(id)a0;
- (void)remapWithMap:(const void *)a0;
- (id)removeUuidsFromSetReturningRemoved:(id)a0;
- (void)reserve:(unsigned long long)a0;

@end
